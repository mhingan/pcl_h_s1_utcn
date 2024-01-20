//Program care citeste valorile in km/h a doua masini, si calculeaza in cat timp se intalnesc acestea 
#include <stdio.h>

int main() {
    double v1, v2, timp;
    double d = 100;

    printf("Introduceti viteza primei masini: ");
    scanf("%lf", &v1);

    printf("Introduceti viteza celei de-a doua masini: ");
    scanf("%lf", &v2);

    //calculare timp in ore dupa formula: Timp = distanta/(viteza1 + viteza2)
    timp = d / (v1 + v2);

    //convertire timp din ore in minute
    timp *= 60;

    printf("Cele doua masini se intalnesc dupa %.2f minute.\n", timp);

}
/**
/Users/hinganm/CLionProjects/PCL_Teme/library
Introduceti viteza primei masini: 100
Introduceti viteza celei de-a doua masini: 100
Cele doua masini se intalnesc dupa 30.00 minute.

Process finished with exit code 0
 * **/

