//Program care citeste un numar de la tastatura si afiseaza numarul de 0-uri din reprezentarea sa binara;
#include <stdio.h>


int main() {
    int number;
    int numbers_of_0 = 0;
    printf("Introdu un numar: ");
    scanf("%d", &number);

    //Utilizand un while loop verificam daca numarul emai mare ca zero, in interior se afla un if care verifica daca ultimul bit 
    // e egal cu 0, daca daca incrementeaza valoare lui numbers_of_0, daca nutrece la bit-ul urmator;
    while (number > 0) {
        if ((number & 1) == 0) {
            numbers_of_0++;
        }
        //deplasez cu un bit la dreapta pentru a verifica daca e 0 sau 1
        number >>= 1;
    }

    printf("\nNumarul total de zerouri este in reprezentarea binara este: %d", numbers_of_0);
}



/**
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introdu un numar: 566

Numarul total de zerouri este in reprezentarea binara este: 5
Process finished with exit code 0

*/
