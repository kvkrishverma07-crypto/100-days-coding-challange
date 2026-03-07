#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Standard stack functions
void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1) return -1;
    return stack[top--];
}

// Function to define operator precedence
int precedence(char x) {
    if (x == '(') return 0;
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    if (x == '^') return 3;
    return 0;
}

int main() {
    char infix[MAX];
    char x;

    // Read the infix expression
    scanf("%s", infix);

    for (int i = 0; i < strlen(infix); i++) {
        char current = infix[i];

        // 1. If character is an operand (A-Z, a-z, 0-9), print it
        if (isalnum(current)) {
            printf("%c", current);
        }
        // 2. If it's '(', push it to stack
        else if (current == '(') {
            push(current);
        }
        // 3. If it's ')', pop and print until '(' is reached
        else if (current == ')') {
            while ((x = pop()) != '(') {
                printf("%c", x);
            }
        }
        // 4. If it's an operator
        else {
            while (top != -1 && precedence(stack[top]) >= precedence(current)) {
                printf("%c", pop());
            }
            push(current);
        }
    }

    // 5. Pop and print all remaining operators from the stack
    while (top != -1) {
        printf("%c", pop());
    }

    printf("\n");
    return 0;
}
