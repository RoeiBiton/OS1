CC = gcc
CFLAGS = -Wall -std=c99

all: max_sub_n max_sub_n2 max_sub_n3 
 
max_sub_n: max_sub_n.c
	$(CC) $(CFLAGS) -o max_sub_n max_sub_n.c -pg

max_sub_n2: max_sub_n2.c
	$(CC) $(CFLAGS) -o max_sub_n2 max_sub_n2.c -pg

max_sub_n3: max_sub_n3.c
	$(CC) $(CFLAGS) -o max_sub_n3 max_sub_n3.c -pg

clean:
	rm -f max_sub_n max_sub_n2 max_sub_n3  gmon.out