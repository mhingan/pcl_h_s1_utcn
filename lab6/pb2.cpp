//Program care verifica daca un numar este patrat perfect;

#include <stdio.h>
#include <math.h>


int main() {
    int a;
    printf("Introduceti un numar real: ");
    scanf("%d", &a);

    //Calculez radacina patrat ca si int, daca radacina patrata ridicata la puterea a doua este egal cu a, atunci e patrat perfect.
    int rezultat = sqrt(a);
    if (pow(rezultat, 2) == a) {
        printf("Patrat perfect");
    } else {
        printf("Nu e patrat perfect");
    }

}

/**
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introduceti un numar real: 4
Patrat perfect
Process finished with exit code 0
 * */
