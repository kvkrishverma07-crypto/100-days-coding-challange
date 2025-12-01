\
    #include <stdio.h>

    int main(void) {
        long long x;
        printf("Enter an integer: ");
        if (scanf("%lld", &x) != 1) return 0;
        if (x < 0) x = -x;

        int cnt[10] = {0};
        if (x == 0) cnt[0] = 1;
        while (x > 0) {
            cnt[x % 10]++;
            x /= 10;
        }

        int max = 0, digit = 0;
        for (int i = 0; i < 10; i++) {
            if (cnt[i] > max) {
                max = cnt[i];
                digit = i;
            }
        }

        printf("Most frequent digit = %d (appeared %d times)\n", digit, max);
        return 0;
    }
