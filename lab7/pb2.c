//Program care citeste doua valori ale capacitatilor, si afiseaza rezultatul capacitatii echivalente in serie si paralel
//Afisare la stanga
#include <stdio.h>

float calcul_serie(float c1, float c2);

float calcul_paralel(float c1, float c2);

int main() {
    float c1, c2;
    printf("Introduceti valoare primei capacitati - c1 = ");
    scanf("%f", &c1);

    printf("Introduceti valoare capacitatii doi - c2 = ");
    scanf("%f", &c2);

    float rezultat_serie = calcul_serie(c1, c2);
    float rezultat_paralel = calcul_paralel(c1, c2);
//utilizand -12, aliniez la stanga
    printf("\nCapacitatea in serie este: %-12.4f", rezultat_serie);
    printf("\nCapacitatea in paralel este: %-12.4f", rezultat_paralel);

}

float calcul_serie(float c1, float c2) {
    float c12 = (c1 * c2) / (c1 + c2);
    return c12;
}

float calcul_paralel(float c1, float c2) {
    float c12 = c1 + c2;
    return c12;
}



/**
 /Users/hinganm/CLionProjects/PCL_Teme/library
Introduceti valoare primei capacitati - c1 = 3.55
Introduceti valoare capacitatii doi - c2 = 6.76

Capacitatea in serie este: 2.3276      
Capacitatea in paralel este: 10.3100     
Process finished with exit code 0


 * **/

