\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int n;
        printf("Enter number of elements: ");
        if (scanf("%d", &n) != 1) return 0;

        int *a = malloc(sizeof(int) * n);
        int pos = 0, neg = 0, zero = 0;
        for (int i = 0; i < n; i++) {
            printf("Enter element %d: ", i);
            scanf("%d", &a[i]);
            if (a[i] > 0) pos++;
            else if (a[i] < 0) neg++;
            else zero++;
        }

        printf("Positive = %d, Negative = %d, Zero = %d\n", pos, neg, zero);
        free(a);
        return 0;
    }
