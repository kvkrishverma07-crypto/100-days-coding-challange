\
    #include <stdio.h>
    #include <stdlib.h>

    int main(void) {
        int n;
        printf("Enter number of elements: ");
        if (scanf("%d", &n) != 1) return 0;

        int *a = malloc(sizeof(int) * n);
        int even = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            printf("Enter element %d: ", i);
            scanf("%d", &a[i]);
            if (a[i] % 2 == 0) even++;
            else odd++;
        }

        printf("Even = %d, Odd = %d\n", even, odd);
        free(a);
        return 0;
    }
