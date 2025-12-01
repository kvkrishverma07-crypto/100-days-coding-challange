\
    #include <stdio.h>
    #include <string.h>

    int main(void) {
        char a[1000], b[1000];
        printf("Enter first string: ");
        if (!fgets(a, sizeof(a), stdin)) return 0;
        printf("Enter second string: ");
        if (!fgets(b, sizeof(b), stdin)) return 0;

        a[strcspn(a, "\n")] = '\0';
        b[strcspn(b, "\n")] = '\0';

        int la = (int)strlen(a), lb = (int)strlen(b);
        if (la != lb) { printf("No\n"); return 0; }

        char t[2000];
        strcpy(t, a);
        strcat(t, a);

        if (strstr(t, b)) printf("Yes\n");
        else printf("No\n");
        return 0;
    }
