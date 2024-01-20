#include <stdio.h>
#include <string.h>

// Funcție pentru calcularea mediei aritmetice
int mediaAritmetica(int sir[], int lungime);

// Funcție pentru procesarea datelor, citirea numerelor și adăugarea lor în fișier
void procesareDate();


int main() {
    procesareDate();
}


int mediaAritmetica(int sir[], int lungime) {
    // Inițializez variabila pentru suma cu 0
    int suma = 0;

    // Utilizez un for pentru a aduna fiecare număr în suma
    for (int i = 0; i < lungime; i++) {
        suma += sir[i];
    }

    // Calculez media aritmetică, făcând conversia la float
    float media = (float) suma / lungime;

    // Afișez media aritmetică a numerelor introduse
    printf("Media aritmetica este: %.2f\n", media);
    return media;
}


void procesareDate() {
    // Pointer către fișier
    FILE *fp;
    char nume[20];

    // Citesc numele noului fișier
    printf("Introduceti numele fisierului: ");
    scanf("%s", nume);

    // Deschid fișierul
    fp = fopen(nume, "a+");

    // Adaug în fișier fiecare număr citit de la tastatură
    if (fp != NULL) {
        printf("Introduceti numerele:");
        int sir[10];
        for (int i = 0; i < 10; i++) {
            printf("[%d] = ", i);
            scanf("%d", &sir[i]);
            fprintf(fp, "%d", sir[i]);
            printf("Numar adaugat in fisier cu succes.\n");
        }

        // Calculez media aritmetică a numerelor
        mediaAritmetica(sir, 10);
    }

    // Închid fișierul
    fclose(fp);
}


/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numele fisierului: fisier.txt
Introduceti numerele:[0] = 1
Numar adaugat in fisier cu succes.
[1] = 23
Numar adaugat in fisier cu succes.
[2] = 45
Numar adaugat in fisier cu succes.
[3] = 78
Numar adaugat in fisier cu succes.
[4] = 99
Numar adaugat in fisier cu succes.
[5] = 87
Numar adaugat in fisier cu succes.
[6] = 90
Numar adaugat in fisier cu succes.
[7] = 34
Numar adaugat in fisier cu succes.
[8] = 22
Numar adaugat in fisier cu succes.
[9] = 56
Numar adaugat in fisier cu succes.
Media aritmetica este: 53.50

Process finished with exit code 0

**/
