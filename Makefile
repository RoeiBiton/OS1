
all: libpoisson.so main

libpoisson.so: poisson.o
	gcc -shared -fPIC -o libpoisson.so poisson.o

main: main.c poisson.h
	gcc -o main main.c -ldl

poisson.o: poisson.c poisson.h
	gcc -c poisson.c

clean:
	rm -f libpoisson.so main
