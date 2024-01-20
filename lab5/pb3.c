/*Program care afiseaza valorile unei varaibile unsigned dupa ce aplicam operatorul >> si %*/
#include <stdio.h>


int main() {
    unsigned int valoare = 82;

    printf("Valoarea initiala a variabilei este: %d\n", valoare);

    //Afisare valoare binara prin aplicarea unui for loop, aplicand operatorul de deplasare dreapta
    //operatorul deplasare spre drepata, ia vloare curenta a numarului binar, si deplaseaza spre dreapta cu 1, exampleu: 10110011 >> 11011001
    //parcurge fiecare bit din valoare si il printeaza cu valoarea curenta
    printf("Valoarea in binar: ");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (valoare >> i) & 1);
    }
    printf("\n");

    //Aplicarea unui un nou for loop pentru oeratorul %, care dupa deplasarea spre dreapta, ne arata valoarea cuenta a fiecarui bit
    printf("Valoarea dupa deplasare la dreapta si modulo:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d: %d\n", i, valoare % 2);
        valoare >>= 1;
    }

    return 0;
}


/**
 /Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Valoarea initiala a variabilei este: 82
Valoarea in binar: 01010010
Valoarea dupa deplasare la dreapta si modulo:
0: 0
1: 1
2: 0
3: 0
4: 1
5: 0
6: 1
7: 0
Process finished with exit code 0
*/

