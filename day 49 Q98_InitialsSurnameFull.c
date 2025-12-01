\
    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>

    int main(void) {
        char s[1000];
        printf("Enter full name: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        int n = (int)strcspn(s, "\n");
        s[n] = '\0';

        int last = -1;
        for (int i = n - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                last = i;
                while (i >= 0 && s[i] != ' ') i--;
                int start = i + 1;
                for (int j = start; j <= last; j++) putchar(s[j]);
                printf(" ");
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if ((i == 0 || (s[i - 1] == ' ' && s[i] != ' ')) && i != last) {
                putchar(toupper((unsigned char)s[i]));
                putchar('.');
            }
        }
        putchar('\n');
        return 0;
    }
