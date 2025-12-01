\
    #include <stdio.h>

    int main(void) {
        for (int i = 0; i < 4; i++) {
            for (int s = 0; s < 3 - i; s++) putchar(' ');
            for (int j = 0; j < 2 * i + 1; j++) putchar('*');
            putchar('\n');
        }
        for (int i = 2; i >= 0; i--) {
            for (int s = 0; s < 3 - i; s++) putchar(' ');
            for (int j = 0; j < 2 * i + 1; j++) putchar('*');
            putchar('\n');
        }
        return 0;
    }
