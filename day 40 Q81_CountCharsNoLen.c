\
    #include <stdio.h>

    int main(void) {
        char s[1000];
        printf("Enter a string (newline to end):\n");
        if (!fgets(s, sizeof(s), stdin)) return 0;

        int count = 0;
        for (int i = 0; s[i] && s[i] != '\n'; i++) count++;
        printf("Characters (excluding newline) = %d\n", count);
        return 0;
    }
