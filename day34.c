#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Define a Node for the Linked List
struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

// Push: Add a new node at the beginning of the list
void push(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        return; // Memory allocation failed
    }
    newNode->data = val;
    newNode->next = top;
    top = newNode;
}

// Pop: Remove the top node and return its value
int pop() {
    if (top == NULL) {
        return 0; 
    }
    struct Node* temp = top;
    int poppedVal = temp->data;
    top = top->next;
    free(temp); // Free memory to prevent leaks
    return poppedVal;
}

int main() {
    char expression[100];
    
    // Read the entire postfix expression
    if (fgets(expression, 100, stdin) == NULL) return 0;

    // Use strtok to handle spaces between numbers and operators
    char* token = strtok(expression, " \n");

    while (token != NULL) {
        // 1. If the token is a number (handles negative numbers too)
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            push(atoi(token));
        } 
        // 2. If the token is an operator
        else {
            int val2 = pop(); // Second operand
            int val1 = pop(); // First operand
            
            switch (token[0]) {
                case '+': push(val1 + val2); break;
                case '-': push(val1 - val2); break;
                case '*': push(val1 * val2); break;
                case '/': push(val1 / val2); break;
            }
        }
        token = strtok(NULL, " \n");
    }

    // The final result is the only element left in the stack
    printf("%d\n", pop());

    return 0;
}
