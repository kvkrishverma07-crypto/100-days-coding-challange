\
    #include <stdio.h>
    #include <limits.h>
    #include <stdlib.h>

    int main(void) {
        int n;
        printf("Enter number of elements: ");
        if (scanf("%d", &n) != 1) return 0;

        int *a = malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) {
            printf("Enter element %d: ", i);
            scanf("%d", &a[i]);
        }

        int mn = INT_MAX, mx = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (a[i] < mn) mn = a[i];
            if (a[i] > mx) mx = a[i];
        }

        printf("Minimum = %d, Maximum = %d\n", mn, mx);
        free(a);
        return 0;
    }
