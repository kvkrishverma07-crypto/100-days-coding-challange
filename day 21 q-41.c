\
    #include <stdio.h>
    #include <math.h>

    int main(void) {
        long n;
        printf("Enter a number: ");
        if (scanf("%ld", &n) != 1) return 0;

        int negative = n < 0;
        if (negative) n = -n;

        long temp = n;
        long last = n % 10;
        long first = n;
        int digits = 0;
        while (first >= 10) {
            first /= 10;
            digits++;
        }
        long p = 1;
        for (int i = 0; i < digits; i++) p *= 10;

        long middle = (n % p) / 10;
        long result = last * p + middle * 10 + first;

        if (negative) result = -result;
        printf("Number after swapping first and last digits = %ld\n", result);
        return 0;
    }
