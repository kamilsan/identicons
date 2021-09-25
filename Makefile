CC=gcc
CFLAGS=-std=c11 -Wall -Wextra -pedantic

all: main.o image.o pattern.o
	$(CC) $(CFLAGS) main.o image.o pattern.o -o app

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

image.o: image.c image.h
	$(CC) $(CFLAGS) -c image.c

pattern.o: pattern.c pattern.h
	$(CC) $(CFLAGS) -c pattern.c

clean:
	rm -rf *.o app