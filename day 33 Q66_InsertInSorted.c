\
    #include <stdio.h>

    int main(void) {
        int n;
        printf("Enter size of sorted array: ");
        if (scanf("%d", &n) != 1) return 0;

        int a[1000];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        int val;
        printf("Enter value to insert: ");
        if (scanf("%d", &val) != 1) return 0;

        int i = n - 1;
        while (i >= 0 && a[i] > val) {
            a[i + 1] = a[i];
            i--;
        }
        a[i + 1] = val;
        n++;

        printf("Array after insertion: ");
        for (i = 0; i < n; i++) printf("%d ", a[i]);
        printf("\n");
        return 0;
    }
