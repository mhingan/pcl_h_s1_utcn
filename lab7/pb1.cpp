//Program care citeste doua valori de la tastatura si calculeaza rezistenta in serie si in paralel.
//Si afiseaza rezultatul cu 3 zecimale, aliniat la dreapta.
#include <stdio.h>

float calcul_serie(float r1, float r2);

float calcul_paralel(float r1, float r2);

int main() {
    float r1, r2;
    printf("Introduceti valoare primei rezisteste - r1 = ");
    scanf("%f", &r1);

    printf("Introduceti valoare primei rezisteste - r2 = ");
    scanf("%f", &r2);

    float rezultat_serie = calcul_serie(r1, r2);
    float rezultat_paralel = calcul_paralel(r1, r2);

    printf("\nRezistenta in serie este: %12.4f", rezultat_serie);
    printf("\nRezistenta in paralel este: %12.4f", rezultat_paralel);

}

float calcul_serie(float r1, float r2) {
    float r12 = r1 + r2;
    return r12;
}

float calcul_paralel(float r1, float r2) {
    float r12 = (r1 * r2) / (r1 + r2);
    return r12;
}

/**
 /Users/hinganm/CLionProjects/PCL_Teme/library
Introduceti valoare primei rezisteste - r1 = 3.22
Introduceti valoare primei rezisteste - r2 = 3.65

Rezistenta in serie este: 6.8700
Rezistenta in paralel este: 1.7108
Process finished with exit code 0

 * **/
