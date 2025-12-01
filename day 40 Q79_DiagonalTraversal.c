\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int r, c;
        printf("Enter rows and columns: ");
        if (scanf("%d %d", &r, &c) != 2) return 0;

        int (*a)[c] = malloc(sizeof(int) * r * c);
        for (int i = 0; i < r; i++) for (int j = 0; j < c; j++) scanf("%d", &a[i][j]);

        int lim = r < c ? r : c;
        printf("Main-diagonal traversal: ");
        for (int i = 0; i < lim; i++) printf("%d ", a[i][i]);
        printf("\n");

        free(a);
        return 0;
    }
