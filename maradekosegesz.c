#include <stdio.h>

int main(void) {
    // Maradekos osztas kiirasa
    // bekert ertekek alapjan (egesz)
    int osztando, oszto;
    int hanyados, maradek;

    // Adatok bekerese
    printf("Adj meg ket egesz szamot!\n");
    printf("szam1 = ");
    scanf("%d", &osztando);
    printf("szam2 = ");
    scanf("%d", &oszto);

    // Szamitas
    hanyados = osztando / oszto;
    maradek = osztando % oszto;

    // Kiiras
    printf("%d / %d = %d, maradek %d\n", osztando, oszto, hanyados, maradek);

    return 0;
}
