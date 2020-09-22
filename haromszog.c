#include <stdio.h>
#include <math.h>

int main(void) {
    // Haromszog teruletenek szamitasa
    // bekert oldalak segitsegevel
    // (Heron-keplettel)
    double a, b, c;
    double s;
    double t;

    // Adatok bekerese
    printf("Add meg egy haromszog harom oldalat (a, b, c)!\n");
    printf("a = ");
    scanf("%lf", &a);
    printf("b = ");
    scanf("%lf", &b);
    printf("c = ");
    scanf("%lf", &c);

    // Szamitas
    s = (a + b + c) / 2;
    t = sqrt(s * (s - a) * (s - b) * (s - c));

    // Kiiras
    printf("Az adott oldalakkal hatarolt haromszog terulete:\n");
    printf("T = %g\n", t);

    return 0;
}
