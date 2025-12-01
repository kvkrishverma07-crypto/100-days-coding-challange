\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int n, key;
        printf("Enter size of sorted array: ");
        if (scanf("%d", &n) != 1) return 0;

        int *a = malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) {
            printf("Enter element %d: ", i);
            scanf("%d", &a[i]);
        }

        printf("Enter key to search: ");
        if (scanf("%d", &key) != 1) { free(a); return 0; }

        int l = 0, r = n - 1;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (a[mid] == key) {
                printf("Found at index %d\n", mid);
                free(a);
                return 0;
            } else if (a[mid] < key) l = mid + 1;
            else r = mid - 1;
        }

        printf("Not found\n");
        free(a);
        return 0;
    }
