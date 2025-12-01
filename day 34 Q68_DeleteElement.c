\
    #include <stdio.h>

    int main(void) {
        int n;
        printf("Enter size of array: ");
        if (scanf("%d", &n) != 1) return 0;

        int a[1000];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        int pos;
        printf("Enter position (0-based) to delete: ");
        if (scanf("%d", &pos) != 1) return 0;

        if (pos < 0 || pos >= n) {
            printf("Invalid position\n");
            return 0;
        }

        for (int i = pos; i < n - 1; i++) a[i] = a[i + 1];
        n--;

        printf("Array after deletion: ");
        for (int i = 0; i < n; i++) printf("%d ", a[i]);
        printf("\n");
        return 0;
    }
