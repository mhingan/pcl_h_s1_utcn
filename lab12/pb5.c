//program care citeşte datele personale pentru n persoane (nume, prenume,
//data naşterii, codul numeric personal, data angajării) şi apoi le afişează în ordinea datei angajării.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data_angajare {
    int zi;
    int luna;
    int an;
};

//definire structura
struct Angajat {
    char nume[20];
    char prenume[20];
    char data_nasterii[10];
    int cnp[13];
    struct data_angajare dataAngajare;
};

//def. functie de procesare date
void procesareDateAngajati(struct Angajat *angajati, int n);

int main() {
    int b;

    printf("Introduceti nr. de angajati: ");
    scanf("%d", &b);

    struct data_angajare *data = (struct data_angajare *) malloc(b * sizeof(struct data_angajare));
    struct Angajat *angajati = (struct Angajat *) malloc(b * sizeof(struct Angajat));

    for (int i = 0; i < b; i++) {
        printf("Nume angajat:");
        scanf("%s", angajati[i].nume);
        printf("Prenume angajat:");
        scanf("%s", angajati[i].prenume);
        printf("Data nasterii:");
        scanf("%s", angajati[i].data_nasterii);
        printf("CNP angajat:");
        scanf("%d", &angajati[i].cnp);
        printf("\nDate angajare:");
        printf("Introduceti ziua angajarii:");
        scanf("%d", &angajati[i].dataAngajare.zi);
        printf("Introduceti luna angajarii:");
        scanf("%d", &angajati[i].dataAngajare.luna);
        printf("Introduceti anul angajarii:");
        scanf("%d", &angajati[i].dataAngajare.an);
    }

    procesareDateAngajati(angajati, b);

    free(data);
    free(angajati);
}

//functie care afiseaza angajatii in oridinea angajarii
void procesareDateAngajati(struct Angajat *angajati, int n) {
    struct Angajat temp; // aariabila temporară pentru interschimbare

    // Bubble Sort pentru sortarea angajatilor in functie de data angajarii
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (angajati[j].dataAngajare.an > angajati[j + 1].dataAngajare.an ||
                (angajati[j].dataAngajare.an == angajati[j + 1].dataAngajare.an &&
                 angajati[j].dataAngajare.luna > angajati[j + 1].dataAngajare.luna) ||
                (angajati[j].dataAngajare.an == angajati[j + 1].dataAngajare.an &&
                 angajati[j].dataAngajare.luna == angajati[j + 1].dataAngajare.luna &&
                 angajati[j].dataAngajare.zi > angajati[j + 1].dataAngajare.zi)) {
                // efectuez interschimbarea
                temp = angajati[j];
                angajati[j] = angajati[j + 1];
                angajati[j + 1] = temp;
            }
        }
    }

    // Afișarea angajatilor in ordinea datelor de angajare
    printf("\nAngajatii in ordinea datelor de angajare:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %s - Data angajarii: %d-%d-%d\n", angajati[i].nume, angajati[i].prenume,
               angajati[i].dataAngajare.zi, angajati[i].dataAngajare.luna, angajati[i].dataAngajare.an);
    }
}






/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti nr. de angajati: 3
Nume angajat:Mircea
Prenume angajat:Mihai
Data nasterii:26.03.2002
CNP angajat:1234567890123

Date angajare:Introduceti ziua angajarii:23
Introduceti luna angajarii:3
Introduceti anul angajarii:2017
Nume angajat:Nut
Prenume angajat:Mirela
Data nasterii:23.12.2000
CNP angajat:1234567890098

Date angajare:Introduceti ziua angajarii:12
Introduceti luna angajarii:12
Introduceti anul angajarii:2012
Nume angajat:Alos
Prenume angajat:Vlad
Data nasterii:23.01.1998
CNP angajat:1234567890012

Date angajare:Introduceti ziua angajarii:09
Introduceti luna angajarii:12
Introduceti anul angajarii:2018

Angajatii in ordinea datelor de angajare:
Nut Mirela - Data angajarii: 12-12-2012
Mircea Mihai - Data angajarii: 23-3-2017
Alos Vlad - Data angajarii: 9-12-2018

Process finished with exit code 0
 * **/
