CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LIBS = -lm

all: poisson

poisson: poisson.o
	$(CC) $(CFLAGS) -o poisson poisson.o $(LIBS)

poisson.o: poisson.c
	$(CC) $(CFLAGS) -c poisson.c

clean:
	rm -f poisson.o poisson