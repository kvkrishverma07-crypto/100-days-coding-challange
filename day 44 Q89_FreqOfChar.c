\
    #include <stdio.h>

    int main(void) {
        char s[1000];
        char ch;
        printf("Enter a string: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;
        printf("Enter character to count: ");
        if (scanf(" %c", &ch) != 1) return 0;

        int cnt = 0;
        for (int i = 0; s[i] && s[i] != '\n'; i++) if (s[i] == ch) cnt++;
        printf("Frequency of '%c' = %d\n", ch, cnt);
        return 0;
    }
