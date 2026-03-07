#include <stdio.h>
#include <stdlib.h>

// Define a Node for the Linked List
struct Node {
    int data;
    struct Node* next;
};

// Pointers to track the start and end of the queue
struct Node* front = NULL;
struct Node* rear = NULL;

// Enqueue: Add an element to the rear of the queue
void enqueue(int val) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) return;
    
    newNode->data = val;
    newNode->next = NULL;

    // If queue is empty, both front and rear point to the new node
    if (rear == NULL) {
        front = rear = newNode;
        return;
    }

    // Add the new node at the end and update rear
    rear->next = newNode;
    rear = newNode;
}

// Display: Print elements from front to rear
void display() {
    struct Node* temp = front;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) printf(" "); // Formatting for space-separated output
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int n, val;

    // 1. Read the number of elements
    if (scanf("%d", &n) != 1) return 0;

    // 2. Enqueue all n elements
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &val) == 1) {
            enqueue(val);
        }
    }

    // 3. Display the queue
    display();

    return 0;
}
