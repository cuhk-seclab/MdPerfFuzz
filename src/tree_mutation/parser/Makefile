all:
	for f in *.cpp; do g++ -g -I ../runtime/src/ -c $$f -fPIC -std=c++11; done
	g++ -shared -std=c++11 *.o ../dist/libantlr4-runtime.a  -o libTreeMutation.so

clean:
	rm  M*.cpp M*.h M*.tokens M*.o main main.o

.PHONY: compile
