//Program care aloca memorie pentru 10.000 de intregi, genereaza automat valorile pentru intregi si cauta cel mai frecvent numar
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000

int generare_numere();

void gasire_numere(int numere[], int frecventa[], int size);

int main() {
    //initializare genarare numere
    srand((unsigned int)time(NULL));

    //alocare dinamica de memorie pentru numere
    int *numere = (int *)malloc(SIZE * sizeof(int));

    //initializare tablou cu numere generate aleatoriu
    for (int i = 0; i < SIZE; i++) {
        numere[i] = generare_numere();
    }

    //calcularea frecventei fiecarui numar in tablou
    int *frecventa = (int *)calloc(100, sizeof(int));

    for (int i = 0; i < SIZE; i++) {
        frecventa[numere[i] - 1]++;
    }

    //afisarea celor mai frecvente 10 numere din tablou
    gasire_numere(numere, frecventa, SIZE);

    //eliberarea memoriei
    free(numere);
    free(frecventa);
    
}

//functie care genereaza random numere intre 1 si 100 (inclusiv. 100+1)
int generare_numere() {
    return rand() % 100 + 1; 
}

//functie care gaseste cele mai frecvente 10 numere
void gasire_numere(int numere[], int frecventa[], int size) {
    printf("Cele mai frecvente 10 numere sunt:\n");

    for (int i = 0; i < 10; i++) {
        int nrMax = 0;
        for (int j = 1; j < size; j++) {
            if (frecventa[j] > frecventa[nrMax]) {
                nrMax = j;
            }
        }

        // Afisarea numarului si frecventei
        printf("Numar: %d, Aparitii: %d\n", nrMax + 1, frecventa[nrMax]);

        // Setarea frecventei numarului la -1 pentru a nu-l mai lua in considerare in urmatoarele cautari
        //daca nu fac asta, o sa imi afiseze de 10 ori acelasi numar
        frecventa[nrMax] = -1;
    }
}

/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Cele mai frecvente 10 numere sunt:
Numar: 73, Aparitii: 122
Numar: 64, Aparitii: 120
Numar: 36, Aparitii: 119
Numar: 21, Aparitii: 117
Numar: 52, Aparitii: 117
Numar: 75, Aparitii: 116
Numar: 81, Aparitii: 115
Numar: 53, Aparitii: 114
Numar: 7, Aparitii: 113
Numar: 19, Aparitii: 113

Process finished with exit code 0

 * **/
