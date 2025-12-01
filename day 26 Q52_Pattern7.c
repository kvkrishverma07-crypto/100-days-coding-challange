\
    #include <stdio.h>

    int main(void) {
        /* The pattern from the prompt is a grouped vertical stars pattern.
           We'll print the same groups as shown. */
        int groups = 5;
        int counts[] = {1, 2, 3, 4, 1}; /* reasonable interpretation */
        for (int g = 0; g < groups; g++) {
            for (int i = 0; i < counts[g]; i++) {
                putchar('*');
                putchar('\n');
            }
            putchar('\n');
        }
        return 0;
    }
