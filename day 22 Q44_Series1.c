\
    #include <stdio.h>

    int main(void) {
        int n;
        double sum = 0.0;
        printf("Enter number of terms n: ");
        if (scanf("%d", &n) != 1) return 0;

        for (int i = 1; i <= n; i++) {
            double num = 2.0 * i - 1.0;
            double den = 2.0 * i;
            sum += num / den;
        }

        printf("Sum = %.6f\n", sum);
        return 0;
    }
