
#include <stdio.h>

int main() {
    int n;
    int piket = 0;
    char x1 = 'C', x2 = 'C', x3 = 'C'; // gjendja fillestare e celesave

    printf("Jepni numrin e hedhjeve: ");
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        printf("Hedhja %d: Jepni porten (A ose B): ", i + 1);
        char port;
        scanf(" %c", &port);

        // Rregulla 1: Celesat x1 dhe x3 ndryshojne kah sa here kalon nje top
        if (port == 'A' || port == 'B') {
            if (x1 == 'C' && x3 == 'C') {
                x1 = 'B';
                x3 = 'B';
            } else {
                x1 = 'C';
                x3 = 'C';
            }
        }

        // Rregulla 2: Celesi x2 ndryshon kah vetem nese kalon dy topa te njepasnjeshem
        if (x2 == 'C') x2 = 'B';
        else x2 = 'C';

        // Rregulla 3: Ne hedhjen e pare, celesat dalin ne porten C
        if (i == 0) {
            x1 = 'C';
            x2 = 'C';
            x3 = 'C';
        }

        // Rregulla 5: Nese topi arrin daljen D, fitohet nje pike
        if (port == 'B') {
            piket++;
        }
    }

    printf("Piket totale: %d\n", piket);

    return 0;
}