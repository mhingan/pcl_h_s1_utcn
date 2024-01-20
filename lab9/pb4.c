//Program care generează aleator 20 de numere întregi cu valori mai mici
//decât 50 (Folosind srand(), rand() si operatorul %). Apoi elimina numerele impare din sir.

#define SIZE 20

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int generare_nr();

void afisare_tab(int *tab, int n);

void eliminare_nr_imp(int *tab, int *n);


int main() {
    srand((unsigned int) time(NULL));

    int tablou[SIZE];
    int dimensiune = SIZE;

    // Generare 20 nr
    for (int i = 0; i < SIZE; i++) {
        tablou[i] = generare_nr();
    }

    // Afisare tabloul initial
    printf("Tabloul initial:\n");
    afisare_tab(tablou, SIZE);

    // Eliminare nr impare
    eliminare_nr_imp(tablou, &dimensiune);

    // Afisare tabloul dupa eliminare nr impare
    printf("Tabloul dupa eliminarea nr impare:\n");
    afisare_tab(tablou, dimensiune);

}

int generare_nr() {
    return rand() % 50;
}

// Functie pentru afisarea tabloului
void afisare_tab(int *tab, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

// Functie pentru eliminarea numerelor impare din tablou
void eliminare_nr_imp(int *tab, int *n) {
    int *src = tab;
    int *dest = tab;

    for (int i = 0; i < *n; i++) {
        if ((*src) % 2 == 0) {
            (*dest) = (*src);
            dest++;
        }
        src++;
    }

    *n = dest - tab;
}




/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Tabloul initial:
37 17 30 23 13 39 30 29 46 33 47 21 2 19 8 26 48 6 23 17
Tabloul dupa eliminarea nr impare:
30 30 46 2 8 26 48 6

Process finished with exit code 0
 * **/

