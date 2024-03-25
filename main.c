#include <stdio.h>

char konverto_noten(int nota_numerike) {
    int shifra_dhjeteshe = nota_numerike / 10;
    char nota;

    switch(shifra_dhjeteshe) {
        case 10:
        case 9:
            nota = 'A';
            break;
        case 8:
            nota = 'B';
            break;
        case 7:
            nota = 'C';
            break;
        case 6:
            nota = 'D';
            break;
        default:
            nota = 'F';
    }

    return nota;
}

int main() {
    int nota_numerike;
    char nota_shkronje;

    printf("Jepni noten ne forme numerike: ");
    scanf("%d", &nota_numerike);

    nota_shkronje = konverto_noten(nota_numerike);

    printf("Nota me shkronje: %c\n", nota_shkronje);

    return 0;
}