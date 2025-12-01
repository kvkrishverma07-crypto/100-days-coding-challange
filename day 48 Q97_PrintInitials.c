\
    #include <stdio.h>
    #include <ctype.h>

    int main(void) {
        char s[1000];
        printf("Enter full name: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        for (int i = 0; s[i] && s[i] != '\n'; i++) {
            if (i == 0 || (s[i - 1] == ' ' && s[i] != ' ')) {
                if (!isspace((unsigned char)s[i])) {
                    putchar(toupper((unsigned char)s[i]));
                    putchar('.');
                }
            }
        }
        putchar('\n');
        return 0;
    }
