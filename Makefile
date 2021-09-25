CC=gcc
CFLAGS=-std=c11 -Wall -Wextra -pedantic

all: main.o image.o
	$(CC) $(CFLAGS) main.o image.o -o app

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

image.o: image.c image.h
	$(CC) $(CFLAGS) -c image.c

clean:
	rm -rf *.o app