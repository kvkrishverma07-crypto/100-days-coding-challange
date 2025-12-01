\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int n, key;
        printf("Enter number of elements: ");
        if (scanf("%d", &n) != 1) return 0;

        int *a = malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) {
            printf("Enter element %d: ", i);
            scanf("%d", &a[i]);
        }

        printf("Enter key to search: ");
        if (scanf("%d", &key) != 1) { free(a); return 0; }

        for (int i = 0; i < n; i++) {
            if (a[i] == key) {
                printf("Found at index %d\n", i);
                free(a);
                return 0;
            }
        }
        printf("Not found\n");
        free(a);
        return 0;
    }
