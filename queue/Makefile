GCC=gcc
SHARED=-shared
OBJ=-c -Wall -Werror -fpic
PWD=/data/data/com.termux/files/home/c_prog/queue

all: librarytest

queue.o:
	$(GCC) $(OBJ) queue.c

libqueue.so: queue.o
	$(GCC) $(SHARED) -o libqueue.so queue.o

librarytest: libqueue.so
	gcc -L$(PWD) -Wall librarytest.c -lqueue

clean:
	rm -rf queue.o libqueue.so a.out
