\
    #include <stdio.h>
    #include <ctype.h>

    int main(void) {
        char s[1000];
        printf("Enter a string: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        int spaces = 0, digits = 0, special = 0;
        for (int i = 0; s[i] && s[i] != '\n'; i++) {
            if (isspace((unsigned char)s[i])) spaces++;
            else if (isdigit((unsigned char)s[i])) digits++;
            else if (isalpha((unsigned char)s[i])) ;
            else special++;
        }

        printf("Spaces = %d, Digits = %d, Special = %d\n", spaces, digits, special);
        return 0;
    }
