all: libpoisson.so main

libpoisson.so: poisson.o
	gcc -shared -fPIC -o libpoisson.so poisson.o -lm  # Link against the math library

main: main.c poisson.h
	gcc -o main main.c -ldl -L. -lpoisson  # Ensure main is linked with libpoisson and dl

poisson.o: poisson.c poisson.h
	gcc -c -fPIC poisson.c  # Added -fPIC here for consistency

clean:
	rm -f *.o libpoisson.so main