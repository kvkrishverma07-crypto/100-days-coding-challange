\
    #include <stdio.h>

    int main(void) {
        for (int i = 0; i < 5; i++) {
            for (int s = 0; s < 4 - i; s++) putchar(' ');
            for (int j = 5 - i; j <= 5; j++) printf("%d", j);
            putchar('\n');
        }
        return 0;
    }
