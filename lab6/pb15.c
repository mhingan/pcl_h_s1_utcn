//Program care citeste un caracter de la tastatura si il afiseaza pe n randuri si n coloane.
#include <stdio.h>

int main() {
    char character;
    int coloana;
    int rand;

    printf("Introduceti un caracter: ");
    scanf("%c", &character);

    printf("Introduceti numarul de randuri: ");
    scanf("%d", &rand);

    printf("Introduceti numarul de coloane: ");
    scanf("%d", &coloana);

    for (int i = 0; i < rand; i++) {
        for (int j = 0; j < coloana; j++) {
            printf("%c ", character);
        }
        printf("\n");
    }


}


/**
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introduceti un caracter: d
Introduceti numarul de randuri: 2
Introduceti numarul de coloane: 3
d d d
d d d
Process finished with exit code 0
 * */
