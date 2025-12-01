\
    #include <stdio.h>
    #include <limits.h>
    #include <stdlib.h>

    int main(void) {
        int n;
        printf("Enter number of elements: ");
        if (scanf("%d", &n) != 1) return 0;

        int *a = malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        int first = INT_MIN, second = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (a[i] > first) {
                second = first;
                first = a[i];
            } else if (a[i] > second && a[i] != first) {
                second = a[i];
            }
        }

        if (second == INT_MIN) printf("Second largest does not exist\n");
        else printf("Second largest = %d\n", second);

        free(a);
        return 0;
    }
