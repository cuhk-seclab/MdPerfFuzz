#!/usr/bin/python3
import numpy as np
from numpy import dot, inner
from numpy.linalg import norm
import subprocess
import os, sys
import time
import argparse

def peer_cosine_similarity(showmax_dir, final_output):
    edges = {}
    for f in os.listdir(showmax_dir):
        with open(os.path.join(showmax_dir, f), 'r') as input_f:
            lines = input_f.readlines()
            for l in lines:
                key, hit = l.split(' ')
                key = int(key)
                if key not in edges:
                    edges[key] = len(edges.keys())

    vectors = {}
    copy_vectors = {}
    vector_length = len(edges.keys())
    for f in os.listdir(showmax_dir):
        with open(os.path.join(showmax_dir, f), 'r') as input_f:
            lines = input_f.readlines()
            new_vector = [0] * vector_length
            for l in lines:
                key, hit = l.split(' ')
                key = int(key)
                hit = int(hit.rstrip())
                new_vector[edges[key]] = hit
            if sum(new_vector) > 40000:
                copy_vectors[f] = new_vector
                vectors[f] = list(np.add.reduceat(new_vector, np.arange(0, len(new_vector), 15)))
            
    start = time.time()
    case2buckets = {}
    buckets = []
    threshold = 0.5
    n_b = 0
    with open(os.path.join(final_output, 'cos-clean.log'), 'w') as output_f:
        for i, (k1, v1) in enumerate(vectors.items()):
            for j, (k2, v2) in enumerate(vectors.items()):
                if i >= j:
                    continue
                cos_sim = inner(v1, v2)/(norm(v1) * norm(v2))
                output_f.write('%s %s %.4f\n' % (k1, k2, round(cos_sim, 4)))
                if cos_sim > threshold:
                    if k1 in case2buckets and k2 in case2buckets:
                        continue
                    elif k1 in case2buckets:
                        case2buckets[k2] = case2buckets[k1]
                        buckets[case2buckets[k2]].append(k2)
                    elif k2 in case2buckets:
                        case2buckets[k1] = case2buckets[k2]
                        buckets[case2buckets[k1]].append(k1)
                    else: 
                        case2buckets[k1] = case2buckets[k2] = len(buckets)
                        buckets.append([k1, k2])

    #print("-1# buckets-one:%d cases:%d" %(len(buckets), len(case2buckets)))
    threshold1 = 0.91
    with open(os.path.join(final_output, 'cos-details.log'), 'w') as output_f:
        for idx in range(len(buckets)):
            case2buckets1 = {}
            buckets1 = []
            n_b1 = 0
            for i, k1 in enumerate(buckets[idx]):
                v1 = copy_vectors[k1]
                for j, k2 in enumerate(buckets[idx]):
                    if i >= j:
                        continue
                    v2 = copy_vectors[k2]
                    cos_sim = inner(v1, v2)/(norm(v1) * norm(v2))
                    if cos_sim > threshold1:
                        if k1 in case2buckets1 and k2 in case2buckets1:
                            continue
                        elif k1 in case2buckets1:
                            case2buckets1[k2] = case2buckets1[k1]
                            buckets1[case2buckets1[k2]].append(k2)
                        elif k2 in case2buckets1:
                            case2buckets1[k1] = case2buckets1[k2]
                            buckets1[case2buckets1[k1]].append(k1)
                        else: 
                            case2buckets1[k1] = case2buckets1[k2] = len(buckets1)
                            buckets1.append([k1, k2])
            #print("-2# buckets-one:%d cases:%d " %(len(buckets1), len(case2buckets1)))
            output_f.write("====%d\n" % idx)
            for b in buckets:
                output_f.write(' '.join(b) + '\n')
    #print('finished ', time.time() - start)

def start(fuzzing_output, binary, final_output):
    print("let's parse hte logs")
    with open(os.path.join(fuzzing_output, 'max-ct-fuzzing.log'), 'r') as input_f:
        lines = input_f.readlines()
        max_inputs = []
        maxes = {}
        lines.reverse()
        for l in lines:
            l = l.strip()
            if l.startswith('adding out-cmark'):
                filename = l.split(' ')[1]
            elif l.startswith('New max'):
                edge = l[7:14]
                count = int(l.split(' ')[3])
                if edge not in maxes:
                    maxes[edge] = count
                    max_inputs.append(filename)
    unique_max_inputs = list(set(max_inputs))
    with open(os.path.join(fuzzing_output, 'unique-max.log'), 'w') as output_f:
        output_f.write('\n'.join(unique_max_inputs))

    showmax_dir = os.path.join(fuzzing_output, 'showmax')
    if not os.path.exists(showmax_dir):
        os.mkdir(showmax_dir)
    else:
        for root, dirs, files in os.walk(showmax_dir):
            for f in files:
                os.remove(os.path.join(root, f))
    print("let's run afl-showmax to obtain edge-hits")
    for input_ in unique_max_inputs:
        result = subprocess.run(['./afl-showmax', '-a', binary, input_.strip()], stdout=subprocess.PIPE)
        with open(os.path.join(showmax_dir, input_.split('/')[-1].rstrip()), 'w') as output_f:
            output_f.write(result.stdout.decode('utf-8'))

    print("lets' compute the cosine similarity score")
    peer_cosine_similarity(showmax_dir, final_output)


if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('-b', '--binary', dest='binary')
    parser.add_argument('-i', '--input', dest='fuzzing_output_directory')
    parser.add_argument('-o', '--output', dest='final_output_directory')
    args = parser.parse_args()
    fail = 0

    if args.binary is None:
        print ("specify the instrumented binary by -b [binary]")
        fail = 1
    elif args.fuzzing_output is None:
        print ("specify fuzzing output directory by -i [fuzzing_output]")
        fail = 1
    elif args.final_output is None:
        print ("specify final output directory by -o [final_outpuy]")
        fail = 1

    if fail:
        parser.print_help()
        sys.exit()

    if not os.path.exists(args.binary):
        print('instrumented binary does not exist')
    if not os.path.isdir(args.fuzzing_output):
        print('fuzzing output directory does not exist')
    if not os.path.exists(args.final_output):
        os.mkdir(args.final_output)

    start(args.fuzzing_output, args.binary, args.final_output)
