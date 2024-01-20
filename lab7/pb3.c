#include <stdio.h>

float calcul_serie_capacitate(float c1, float c2);

float calcul_paralel_capacitate(float c1, float c2);

float calcul_serie_rezistenta(float r1, float r2);

float calcul_paralel_rezistenta(float r1, float r2);

int main() {
    float c1, c2, r1, r2;
    printf("Introduceti valoare primei capacitati - c1 = ");
    scanf("%f", &c1);

    printf("Introduceti valoare capacitatii doi - c2 = ");
    scanf("%f", &c2);
    printf("Introduceti valoare primei rezistente - r1 = ");
    scanf("%f", &r1);

    printf("Introduceti valoare rezistentei doi - r2 = ");
    scanf("%f", &r2);

    float c_serie = calcul_serie_capacitate(c1, c2);
    float c_parelel = calcul_paralel_capacitate(c1, c2);
    float r_serie = calcul_serie_rezistenta(r1, r2);
    float r_paralel = calcul_paralel_rezistenta(r1, r2);

    printf("\nRezultat serie capacitate + rezistenta = %f", c_serie + r_serie);
    printf("\nRezultat paralel capacitate + rezistenta = %f", c_parelel + r_paralel);


}

float calcul_serie_capacitate(float c1, float c2) {
    float c12 = (c1 * c2) / (c1 + c2);
    printf("\nCapacitatea in serie este: %-12.4f", c12);
    return c12;
}

float calcul_paralel_capacitate(float c1, float c2) {
    float c12 = c1 + c2;
    printf("\nCapacitatea in paralel este: %-12.4f", c12);
    return c12;
}

float calcul_serie_rezistenta(float r1, float r2) {
    float r12 = r1 + r2;
    printf("\nRezistenta in serie este: %12.4f", r12);
    return r12;
}

float calcul_paralel_rezistenta(float r1, float r2) {
    float r12 = (r1 * r2) / (r1 + r2);
    printf("\nRezistenta in paralel este: %12.4f", r12);
    return r12;
}



/**
/Users/hinganm/CLionProjects/PCL_Teme/library
Introduceti valoare primei capacitati - c1 = 2.11
Introduceti valoare capacitatii doi - c2 = 1.39
Introduceti valoare primei rezistente - r1 = 4.90
Introduceti valoare rezistentei doi - r2 = 0.89

Capacitatea in serie este: 0.8380      
Capacitatea in paralel este: 3.5000      
Rezistenta in serie este:       5.7900
Rezistenta in paralel este:       0.7532	
Rezultat serie capacitate + rezistenta = 6.627971
Rezultat paralel capacitate + rezistenta = 4.253195
Process finished with exit code 0
 * **/

