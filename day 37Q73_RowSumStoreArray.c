\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int r, c;
        printf("Enter rows and columns: ");
        if (scanf("%d %d", &r, &c) != 2) return 0;

        int (*a)[c] = malloc(sizeof(int) * r * c);
        for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);

        int *rowSum = malloc(sizeof(int) * r);
        for (int i = 0; i < r; i++) {
            int s = 0;
            for (int j = 0; j < c; j++) s += a[i][j];
            rowSum[i] = s;
        }

        printf("Row sums: ");
        for (int i = 0; i < r; i++) printf("%d ", rowSum[i]);
        printf("\n");

        free(a); free(rowSum);
        return 0;
    }
