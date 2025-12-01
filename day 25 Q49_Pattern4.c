\
    #include <stdio.h>

    int main(void) {
        for (int start = 5; start >= 1; start--) {
            for (int j = start; j <= 5; j++) printf("%d", j);
            putchar('\n');
        }
        return 0;
    }
