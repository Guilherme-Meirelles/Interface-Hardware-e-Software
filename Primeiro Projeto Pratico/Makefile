all: compile

compile: library.o pocketpy.o
	gcc library.o pocketpy.o -o main -lm

library.o:
	gcc -Wall -c library.c -o library.o

pocketpy.o:
	gcc -Wall -c pocketpy.c -o pocketpy.o

run: compile
	./main

clean:
	rm -f library.o pocketpy.o main




