\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int n, k;
        printf("Enter array size and k: ");
        if (scanf("%d %d", &n, &k) != 2) return 0;

        int *a = malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        k = n ? (k % n) : 0;
        int *b = malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) b[(i + k) % n] = a[i];

        printf("Array after right rotation by %d: ", k);
        for (int i = 0; i < n; i++) printf("%d ", b[i]);
        printf("\n");

        free(a); free(b);
        return 0;
    }
