#include <stdio.h>

#define MAX 1000

int stack[MAX];
int top = -1;

// Function to add elements to the stack
void push(int val) {
    if (top < MAX - 1) {
        stack[++top] = val;
    }
}

// Function to remove elements (pop)
void pop() {
    if (top >= 0) {
        top--;
    }
}

int main() {
    int n, m, val;

    // 1. Read the number of elements to push
    if (scanf("%d", &n) != 1) return 0;

    // 2. Push n elements onto the stack
    for (int i = 0; i < n; i++) {
        scanf("%d", &val);
        push(val);
    }

    // 3. Read the number of pop operations to perform
    if (scanf("%d", &m) != 1) return 0;
    for (int i = 0; i < m; i++) {
        pop();
    }

    // 4. Display remaining stack elements from top to bottom
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    return 0;
}
