\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int n;
        long sum = 0;
        printf("Enter number of elements: ");
        if (scanf("%d", &n) != 1) return 0;

        int *a = malloc(sizeof(int) * n);
        for (int i = 0; i < n; i++) {
            printf("Enter element %d: ", i);
            scanf("%d", &a[i]);
            sum += a[i];
        }

        printf("Sum of array elements = %ld\n", sum);
        free(a);
        return 0;
    }
