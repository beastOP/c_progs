GCC=gcc
SHARED=-shared
OBJ=-c -Wall -Werror -fpic
PWD=/data/data/com.termux/files/home/c_prog/circular_queue

all: main

circular_queue.o:
	$(GCC) $(OBJ) circular_queue.c

libcircular_queue.so: circular_queue.o
	$(GCC) $(SHARED) -o libcircular_queue.so circular_queue.o

main: libcircular_queue.so
	gcc -L$(PWD) -Wall main.c -lcircular_queue

clean:
	rm -rf circular_queue.o libcircular_queue.so a.out
