//Program care citeste doua numere reale, efectueaza operatiile (+,-,*,/).
//Dupa afisarea rezultatelor face cast la un numar interg. Apoi, afiseaza valoare minima dintre valori folosind operatorul ternar;
#include <stdio.h>


int main() {
    float a;
    float b;
    printf("Introdu primul numar: ");
    scanf("%f", &a);
    printf("Introdu al doilea numar: ");
    scanf("%f", &b);

    float adunare = a + b;
    float scadere = a - b;
    float inmultire = a * b;
    float impartire = a / b;

    printf("\nRezultat adunare: %f\n", adunare);
    printf("Rezultat scadere: %f\n", scadere);
    printf("Rezultat inmultire: %f\n", inmultire);
    printf("Rezultat impartire: %f\n", impartire);

    int adunare_cast = (int) adunare;
    int scadere_cast = (int) scadere;
    int inmultire_cast = (int) inmultire;
    int impartire_cast = (int) impartire;

    printf("\nRezultat adunare cast: %d\n", adunare_cast);
    printf("Rezultat scadere cast: %d\n", scadere_cast);
    printf("Rezultat inmultire cast: %d\n", inmultire_cast);
    printf("Rezultat impartire cast: %d\n", impartire_cast);

    float valoare_min = (a < b) ? a : b;
    printf("\nValoarea minima: %f", valoare_min);
}

/**
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introdu primul numar: 36.51
Introdu al doilea numar: 4.77

Rezultat adunare: 41.279999
Rezultat scadere: 31.739998
Rezultat inmultire: 174.152695
Rezultat impartire: 7.654088

Rezultat adunare cast: 41
Rezultat scadere cast: 31
Rezultat inmultire cast: 174
Rezultat impartire cast: 7

Valoarea minima: 4.770000
Process finished with exit code 0
 * */
