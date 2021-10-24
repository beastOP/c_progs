#ifndef __STACK_H__
#define __STACK_H__

#include <stdbool.h>

typedef struct Stack {
    int top;
    unsigned size;
    int* data;
} Stack;

Stack* create_stack(unsigned size);

void push(Stack* stack, int item);

int pop(Stack* stack);

int peek(Stack* stack);

bool is_empty(Stack* stack);

bool is_full(Stack* stack);

#endif
