\
    #include <stdio.h>

    int main(void) {
        int n;
        printf("Enter size of array: ");
        if (scanf("%d", &n) != 1) return 0;

        int a[1000];
        for (int i = 0; i < n; i++) scanf("%d", &a[i]);

        int pos, val;
        printf("Enter position (0-based) and value to insert: ");
        if (scanf("%d %d", &pos, &val) != 2) return 0;

        if (pos < 0) pos = 0;
        if (pos > n) pos = n;
        for (int i = n; i > pos; i--) a[i] = a[i - 1];
        a[pos] = val;
        n++;

        printf("Array after insertion: ");
        for (int i = 0; i < n; i++) printf("%d ", a[i]);
        printf("\n");
        return 0;
    }
