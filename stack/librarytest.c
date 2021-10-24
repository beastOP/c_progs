#include <stdio.h>
#include <ctype.h>
#include "stack.h"
#define MAX 50

int evaluate_postfix(char* exp) {
    struct Stack* stack = create_stack(strlen(exp));
    for (int i = 0; exp[i]; i++) {
        if(isalpha(exp[i])) {
            printf("Error! you entered a alphabate\n");
        }
        else if (isdigit(exp[i]))
            push(stack, exp[i] - '0');
        else {
            int val1 = pop(stack);
            int val2 = pop(stack);
            switch (exp[i]) {
            case '+': 
                push(stack, val2 + val1);
                break;
            case '-': 
                push(stack, val2 - val1); 
                break;
            case '*': 
                push(stack, val2 * val1);
                break;
            case '/':
                push(stack, val2/val1);
                break;
            }
        }
    }
    return pop(stack);
}

int main() {
    char str[MAX];
    printf("Enter postfix: ");
    scanf("%[^\n]s", str);
    int result = evaluate_postfix(str);
    printf("postfix evaluation: %d\n", result);
}
