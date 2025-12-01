\
    #include <stdio.h>
    #include <string.h>

    int main(void) {
        char s[1000];
        printf("Enter a sentence: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        int maxlen = 0, idx = 0, cur = 0, start = 0;
        int n = (int)strcspn(s, "\n");
        for (int i = 0; i <= n; i++) {
            if (s[i] != ' ' && s[i] != '\t' && s[i] != '\0') cur++;
            else {
                if (cur > maxlen) { maxlen = cur; idx = start; }
                cur = 0;
                start = i + 1;
            }
        }
        if (cur > maxlen) { maxlen = cur; idx = start; }

        for (int i = 0; i < maxlen; i++) putchar(s[idx + i]);
        putchar('\n');
        return 0;
    }
