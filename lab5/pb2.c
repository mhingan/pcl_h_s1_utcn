/*Calculare arie triunghi care primeste ca si input 3 numere intregi si afiseaza aria ca numar real (tip).*/
#include <stdio.h>
#include <cmath>

int main() {
    //Definesc 4 variabile de tip int, respectiv double
    int a;
    int b;
    int c;
    int aria;

    //Citesc de la tastatura laturile triunghiului
    printf("Introdu laturile a, b si c pentru un triunghi.\na:");
    scanf("%d", &a);
    printf("b:");
    scanf("%d", &b);
    printf("c:");
    scanf("%d", &c);

    //calculez semiperimetrul
    int sp = (a + b + c) / 2;

    //Calculez aria dupa formula lui Heron: radical din: (semiperimetrul - a) * (semiperimetrul - b) * (semiperimetrul - c)
    aria = sqrt(sp * (sp - a) * (sp - b) * (sp - c));

    //Convertesc valoare din int in double;
    double aria_finala = (double) aria;
    printf("Aria este %lf ", aria_finala);


}

/**
 * /Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introdu laturile a, b si c pentru un triunghi.
a:5
b:7
c:8
Aria este 17.000000 
Process finished with exit code 0

*/
