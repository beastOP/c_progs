#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include  "stack.h"

Stack* create_stack(unsigned size) {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->size = size;
    stack->top = -1;
    stack->data = (int*)malloc(stack->size * sizeof(int));
    return stack;
}

bool is_full(Stack* stack) {
    return stack->top == stack->size - 1;
}

bool is_empty(Stack* stack) {
    return stack->top == -1;
}

void push(Stack* stack,int item) {
    if(is_full(stack))
        printf("Stack is full!\n");
    else {
        stack->data[++stack->top] = item;
    }
}

int pop(Stack* stack) {
    if(is_empty(stack)) {
        printf("Stack is Empty, nothing to pop\n");
        return 0;
    }
    else {
        return stack->data[stack->top--];
    }
}

int peek(Stack* stack) {
    return stack->data[stack->top];
}

