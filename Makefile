CC=gcc
CFLAGS=-std=c11 -Wall -Wextra -pedantic

all: main.o
	$(CC) $(CFLAGS) main.o -o app

main.o: main.c
	$(CC) $(CFLAGS) -c main.c