\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int n;
        printf("Enter size of square matrix n: ");
        if (scanf("%d", &n) != 1) return 0;

        int (*a)[n] = malloc(sizeof(int) * n * n);
        for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) scanf("%d", &a[i][j]);

        int ok = 1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[i][i] == a[j][j]) ok = 0;
            }
        }

        printf("%s\n", ok ? "Distinct" : "Not Distinct");
        free(a);
        return 0;
    }
