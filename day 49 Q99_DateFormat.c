\
    #include <stdio.h>
    #include <string.h>

    int main(void) {
        char s[20];
        printf("Enter date in dd/mm/yyyy format: ");
        if (scanf("%19s", s) != 1) return 0;

        int d, m, y;
        if (sscanf(s, "%d/%d/%d", &d, &m, &y) != 3) {
            printf("Invalid date format\n");
            return 0;
        }

        const char *mon[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                             "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        if (m < 1 || m > 12) { printf("Invalid month\n"); return 0; }

        printf("%02d-%s-%04d\n", d, mon[m - 1], y);
        return 0;
    }
