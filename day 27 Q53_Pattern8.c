\
    #include <stdio.h>

    int main(void) {
        /* Pyramid increasing then decreasing */
        for (int i = 1; i <= 5; i++) {
            for (int j = 0; j < 2 * i - 1; j++) putchar('*');
            putchar('\n');
        }
        for (int i = 4; i >= 1; i--) {
            for (int j = 0; j < 2 * i - 1; j++) putchar('*');
            putchar('\n');
        }
        return 0;
    }
