\
    #include <stdio.h>
    #include <string.h>

    int main(void) {
        char s[1000];
        printf("Enter a sentence: ");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        int n = (int)strcspn(s, "\n");
        s[n] = '\0';
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && s[j] != ' ') j++;
            for (int k = j - 1; k >= i; k--) putchar(s[k]);
            if (j < n) putchar(' ');
            i = j + 1;
        }
        putchar('\n');
        return 0;
    }
