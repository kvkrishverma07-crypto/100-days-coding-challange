\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int r1, c1, r2, c2;
        printf("Enter r1 c1 r2 c2: ");
        if (scanf("%d %d %d %d", &r1, &c1, &r2, &c2) != 4) return 0;

        if (c1 != r2) {
            printf("Matrix multiplication not possible (c1 must equal r2)\n");
            return 0;
        }

        int (*A)[c1] = malloc(sizeof(int) * r1 * c1);
        int (*B)[c2] = malloc(sizeof(int) * r2 * c2);

        printf("Enter matrix A elements:\n");
        for (int i = 0; i < r1; i++) for (int j = 0; j < c1; j++) scanf("%d", &A[i][j]);

        printf("Enter matrix B elements:\n");
        for (int i = 0; i < r2; i++) for (int j = 0; j < c2; j++) scanf("%d", &B[i][j]);

        int (*C)[c2] = malloc(sizeof(int) * r1 * c2);
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) {
                C[i][j] = 0;
                for (int k = 0; k < c1; k++) C[i][j] += A[i][k] * B[k][j];
            }
        }

        printf("Product matrix:\n");
        for (int i = 0; i < r1; i++) {
            for (int j = 0; j < c2; j++) printf("%d ", C[i][j]);
            printf("\n");
        }

        free(A); free(B); free(C);
        return 0;
    }
