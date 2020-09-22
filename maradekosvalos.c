#include <stdio.h>
#include <math.h>

int main(void) {
    // Maradekos osztas kiirasa
    // bekert ertekek alapjan (valos)
    double osztando, oszto;
    int hanyados;
    double maradek;

    // Adatok bekerese
    printf("Adj meg ket valos szamot!\n");
    printf("szam1 = ");
    scanf("%lf", &osztando);
    printf("szam2 = ");
    scanf("%lf", &oszto);

    // Szamitas
    hanyados = (int)(osztando / oszto);
    maradek = fmod(osztando, oszto);

    // Kiiras
    printf("%g / %g = %d, maradek %g\n", osztando, oszto, hanyados, maradek);

    return 0;
}
