#include <stdio.h>
#include <stdlib.h>

#define MAX 1000 // Define maximum capacity of the stack

int stack[MAX];
int top = -1;    // Initialize top to -1 indicating an empty stack

// Function to add an element to the top of the stack
void push(int val) {
    if (top >= MAX - 1) {
        // Handle Stack Overflow quietly or print a message if needed
        return; 
    }
    stack[++top] = val;
}

// Function to remove and print the top element
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return;
    }
    printf("%d\n", stack[top--]);
}

// Function to print all elements from top to bottom
void display() {
    if (top == -1) {
        // Do nothing or print a newline if the stack is empty
        printf("\n");
        return;
    }
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int n;
    // Read the number of operations
    if (scanf("%d", &n) != 1) return 1;

    for (int i = 0; i < n; i++) {
        int op;
        scanf("%d", &op);
        
        if (op == 1) {
            int val;
            scanf("%d", &val);
            push(val);
        } else if (op == 2) {
            pop();
        } else if (op == 3) {
            display();
        }
    }
    return 0;
}
