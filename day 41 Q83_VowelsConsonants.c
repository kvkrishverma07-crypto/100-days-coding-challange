\
    #include <stdio.h>
    #include <ctype.h>
    #include <string.h>

    int is_vowel(char c) {
        c = (char)tolower((unsigned char)c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int main(void) {
        char s[1000];
        printf("Enter a string: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        int vowels = 0, consonants = 0;
        for (int i = 0; s[i] && s[i] != '\n'; i++) {
            if (isalpha((unsigned char)s[i])) {
                if (is_vowel(s[i])) vowels++;
                else consonants++;
            }
        }

        printf("Vowels = %d, Consonants = %d\n", vowels, consonants);
        return 0;
    }
