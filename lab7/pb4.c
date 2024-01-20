//Program care citeste doua valori ale laturilor unui triunghi dreptunghic si calculeaza perimetrul si ipotenuza.
#include <stdio.h>
#include "math.h"


int main() {
    int a, b, perimetru;
    double ipotenuza;

    printf("Introduceti valoare laturii a: ");
    scanf("%d", &a);

    printf("Introduceti valoarea laturii b: ");
    scanf("%d,", &b);

    int ab = (a * a) + (b * b);
    ipotenuza = sqrt(ab);
    int cast_ipotenuza = (int) ipotenuza;

    perimetru = a + b + cast_ipotenuza;

    printf("\nIpotenuza triunghiului este egala cu %d", cast_ipotenuza);
    printf("\nPerimetrul triunghiului este egal cu %d", perimetru);

}




/**
/Users/hinganm/CLionProjects/PCL_Teme/library
Introduceti valoare laturii a: 5
Introduceti valoarea laturii b: 5
Ipotenuza triunghiului este egala cu 7
Perimetrul triunghiului este egal cu 17
Process finished with exit code 0
 * **/

