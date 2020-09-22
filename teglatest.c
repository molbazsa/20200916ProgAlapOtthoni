#include <stdio.h>

int main(void) {
    // Teglalap felszinenek, terfogatanak szamitasa
    // bekert oldalak segitsegevel
    double a, b, c;
    double felszin, terfogat;

    // Adatok bekerese
    printf("Add meg egy teglatest harom oldalat (a, b, c)!\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    // Szamitas
    felszin = 2 * (a * b + a * c + b * c);
    terfogat = a * b * c;

    // Kiiras
    printf("A teglatest felszine, terfogata:\n");
    printf("A = %g\n", felszin);
    printf("V = %g\n", terfogat);

    return 0;
}