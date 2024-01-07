/*Calculare suma ponerata a 3 numere.*/
#include <iostream>

int main() {
    //initializez 3 variabile int si 3 double
    int a;
    int b;
    int c;
    double pon_a;
    double pon_b;
    double pon_c;

    //cer utilizatorului sa introduca valorile variabilelor
    printf("Primul numar: ");
    scanf("%d", &a);
    printf("Al doilea numar: ");
    scanf("%d", &b);
    printf("Al treilea numar: ");
    scanf("%d", &c);
    printf("Prima pondere: ");
    scanf("%lf", &pon_a);
    printf("A doua pondere: ");
    scanf("%lf", &pon_b);
    printf("A treia pondere: ");
    scanf("%lf", &pon_c);

    //calculez suma ponderilor
    double suma_pon = pon_a + pon_b + pon_c;

    //cu un if, verific daca suma ponderilor e diferita de 1
    if (suma_pon != 1) {
        printf("Suma ponderilor trebuie sa fie 1. Incearca din nou");
    } else {
        double suma_pond_finala = a * pon_a + b * pon_b + c * pon_c;
        printf("Suma ponderata este: %.2f", suma_pond_finala);
    }

}

/**
 * /Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Primul numar: 2
Al doilea numar: 3
Al treilea numar: 4
Prima pondere: 0.2
A doua pondere: 0.4
A treia pondere: 0.4
Suma ponderata este: 3.20
Process finished with exit code 0
 **/
