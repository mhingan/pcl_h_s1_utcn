//Program care citeste un numar "a" si o putere "n" de la tastatura, apoi face calculul a ^ n;

#include <stdio.h>
#include <math.h>


int main() {
    int a, n;
    printf("Introduceti numarul: ");
    scanf("%d", &a);
    printf("Introduceti puterea: ");
    scanf("%d", &n);

    int rezultat = pow(a, n);

    printf("Rezultatul calculului %d^%d este %d", a, n, rezultat);

}

/**
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introduceti numarul: 2
Introduceti puterea: 3
Rezultatul calculului 2^3 este 8
Process finished with exit code 0
 * */
