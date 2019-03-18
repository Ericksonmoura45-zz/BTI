run: main.cpp funcoes.cpp
	@g++ -O0 -g -Wall -ansi -pedantic -pg -o exe main.cpp funcoes.cpp

compile: main.cpp funcoes.h
	@g++ -O0 -g -Wall -ansi -pedantic -pg -c main.cpp funcoes.cpp

link: main.o funcoes.o 
	@g++ main.o funcoes.o -o exe

clean: main.o funcoes.o
	@rm -f *.o
	@rm -f exe
