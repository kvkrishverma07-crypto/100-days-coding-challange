#include <stdio.h>
#include <stdlib.h>

// Define the structure for a Doubly Linked List node
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

int main() {
    int n, value;
    struct Node *head = NULL, *tail = NULL;

    // Read the number of elements
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    for (int i = 0; i < n; i++) {
        scanf("%d", &value);

        // Create a new node and allocate memory
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL) {
            // First node becomes the head
            head = newNode;
            tail = newNode;
        } else {
            // Link the new node to the end of the list
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode; // Move tail to the new node
        }
    }

    // Traversal: Print elements from head to tail
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) {
            printf(" ");
        }
        temp = temp->next;
    }
    printf("\n");

    // Free allocated memory (Good practice)
    temp = head;
    while (temp != NULL) {
        struct Node* nextNode = temp->next;
        free(temp);
        temp = nextNode;
    }

    return 0;
}
