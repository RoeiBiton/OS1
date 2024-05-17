CC = gcc
CFLAGS = -g
TARGETS = q1 q2 q3

all: $(TARGETS)

q1: q1.c
	$(CC) $(CFLAGS) $^ -o $@

q2: q2.c
	$(CC) $(CFLAGS) $^ -o $@

q3: q3.c
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(TARGETS)