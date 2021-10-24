GCC=gcc
SHARED=-shared
OBJ=-c -Wall -Werror -fpic
PWD=/data/data/com.termux/files/home/c_prog/stack

all: librarytest

stack.o:
	$(GCC) $(OBJ) stack.c

libstack.so: stack.o
	$(GCC) $(SHARED) -o libstack.so stack.o

librarytest: libstack.so
	gcc -L$(PWD) -Wall -o test librarytest.c -lstack

clean:
	rm -rf stack.o libstack.so test
