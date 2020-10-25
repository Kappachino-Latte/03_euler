all: main.o
	gcc -o euler main.o
	
main.o: main.c
	gcc -c main.c
	
run:
	./euler
	
clear:
	rm *.o
