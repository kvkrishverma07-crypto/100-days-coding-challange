\
    #include <stdio.h>
    #include <math.h>

    int is_prime(int n) {
        if (n <= 1) return 0;
        for (int i = 2; i <= (int)sqrt(n); i++) if (n % i == 0) return 0;
        return 1;
    }

    int main(void) {
        int n;
        printf("Enter n: ");
        if (scanf("%d", &n) != 1) return 0;

        printf("Primes up to %d: ", n);
        for (int i = 2; i <= n; i++) {
            if (is_prime(i)) printf("%d ", i);
        }
        printf("\n");
        return 0;
    }
