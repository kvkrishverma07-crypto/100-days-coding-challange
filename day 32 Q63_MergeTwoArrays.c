\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int n, m;
        printf("Enter size of first array and second array: ");
        if (scanf("%d %d", &n, &m) != 2) return 0;

        int *a = malloc(sizeof(int) * n);
        int *b = malloc(sizeof(int) * m);

        for (int i = 0; i < n; i++) {
            printf("Enter element %d of first array: ", i);
            scanf("%d", &a[i]);
        }
        for (int j = 0; j < m; j++) {
            printf("Enter element %d of second array: ", j);
            scanf("%d", &b[j]);
        }

        printf("Merged array: ");
        for (int i = 0; i < n; i++) printf("%d ", a[i]);
        for (int j = 0; j < m; j++) printf("%d ", b[j]);
        printf("\n");

        free(a); free(b);
        return 0;
    }
