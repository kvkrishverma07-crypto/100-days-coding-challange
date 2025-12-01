\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int r, c;
        printf("Enter rows and columns: ");
        if (scanf("%d %d", &r, &c) != 2) return 0;

        int (*a)[c] = malloc(sizeof(int) * r * c);
        int (*b)[c] = malloc(sizeof(int) * r * c);

        printf("Enter first matrix elements:\n");
        for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);

        printf("Enter second matrix elements:\n");
        for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &b[i][j]);

        printf("Sum matrix:\n");
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) printf("%d ", a[i][j] + b[i][j]);
            printf("\n");
        }

        free(a); free(b);
        return 0;
    }
