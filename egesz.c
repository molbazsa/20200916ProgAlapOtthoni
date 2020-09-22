#include <stdio.h>
#include <math.h>

int main(void) {
    // Szamhoz legkozelebb eso
    // kisebb es nagyobb egesz meghatarozasa
    // bekert ertek alapjan
    double szam;
    int kisebb_egesz, nagyobb_egesz;

    // Adatok bekerese
    printf("Adj meg egy valos szamot: ");
    scanf("%lf", &szam);

    // Szamitas
    kisebb_egesz = (int)floor(szam);
    nagyobb_egesz = (int)ceil(szam);

    // Kiiras
    printf("A szamhoz legkozelebb eso kisebb egesz: %d\n", kisebb_egesz);
    printf("A szamhoz legkozelebb eso nagyobb egesz: %d\n", nagyobb_egesz);
    
    return 0;
}
