\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int n;
        printf("Enter number of elements: ");
        if (scanf("%d", &n) != 1) return 0;

        int *a = malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        for (int i = 0; i < n / 2; i++) {
            int t = a[i];
            a[i] = a[n - 1 - i];
            a[n - 1 - i] = t;
        }

        printf("Reversed array: ");
        for (int i = 0; i < n; i++) printf("%d ", a[i]);
        printf("\n");
        free(a);
        return 0;
    }
