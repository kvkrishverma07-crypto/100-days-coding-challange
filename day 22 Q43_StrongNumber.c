\
    #include <stdio.h>

    int factorial(int x) {
        int f = 1;
        for (int i = 2; i <= x; i++) f *= i;
        return f;
    }

    int main(void) {
        int n;
        printf("Enter a number: ");
        if (scanf("%d", &n) != 1) return 0;

        int temp = n;
        int sum = 0;
        while (temp > 0) {
            int d = temp % 10;
            sum += factorial(d);
            temp /= 10;
        }

        if (sum == n) printf("Strong\n");
        else printf("Not Strong\n");

        return 0;
    }
