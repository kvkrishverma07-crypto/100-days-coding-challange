\
    #include <stdio.h>

    int main(void) {
        char s[1000];
        printf("Enter a lowercase string: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        for (int i = 0; s[i] && s[i] != '\n'; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') s[i] = (char)(s[i] - 'a' + 'A');
        }

        printf("%s", s);
        return 0;
    }
