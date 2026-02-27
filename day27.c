#include <stdio.h>
#include <stdlib.h>

// Standard Node structure
struct Node {
    int data;
    struct Node* next;
};

// Helper function to create a new node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

int main() {
    int n, m, val;
    struct Node *head1 = NULL, *tail1 = NULL;
    struct Node *head2 = NULL, *tail2 = NULL;

    // Build First Linked List
    if (scanf("%d", &n) == 1) {
        for (int i = 0; i < n; i++) {
            scanf("%d", &val);
            struct Node* newNode = createNode(val);
            if (!head1) head1 = tail1 = newNode;
            else { tail1->next = newNode; tail1 = newNode; }
        }
    }

    // Build Second Linked List
    if (scanf("%d", &m) == 1) {
        for (int i = 0; i < m; i++) {
            scanf("%d", &val);
            struct Node* newNode = createNode(val);
            if (!head2) head2 = tail2 = newNode;
            else { tail2->next = newNode; tail2 = newNode; }
        }
    }

    // Logic: Find Intersection
    struct Node *ptr1 = head1, *ptr2 = head2;

    // Advance the pointer of the longer list
    if (n > m) {
        for (int i = 0; i < (n - m); i++) ptr1 = ptr1->next;
    } else if (m > n) {
        for (int i = 0; i < (m - n); i++) ptr2 = ptr2->next;
    }

    // Traverse both until they hit a common value or end
    int found = 0;
    while (ptr1 != NULL && ptr2 != NULL) {
        if (ptr1->data == ptr2->data) {
            printf("%d\n", ptr1->data);
            found = 1;
            break;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    if (!found) {
        printf("No Intersection\n");
    }

    // Free memory (omitted for brevity, but recommended in production)
    return 0;
}
