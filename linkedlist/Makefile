GCC=gcc
SHARED=-shared
OBJ=-c -Wall -Werror -fpic
PWD=/data/data/com.termux/files/home/c_prog/linkedlist

all: main

linkedlist.o:
	$(GCC) $(OBJ) linkedlist.c

liblinkedlist.so: linkedlist.o
	$(GCC) $(SHARED) -o liblinkedlist.so linkedlist.o

main: liblinkedlist.so
	gcc -L$(PWD) -Wall -o main main.c -llinkedlist

clean:
	rm -rf linkedlist.o liblinkedlist.so test
