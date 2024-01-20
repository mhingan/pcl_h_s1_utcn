//aplicaţie C, care utilizând o structură de tip angajat să afişeze toate datele per-
//soanelor cu ocupaţia inginer, dintr-o întreprindere (nume, prenume, ocupaţia, data naşterii, secţia
//în care lucrează).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//def. strcutura data nasterii
struct data_nasterii {
    int zi;
    int luna;
    int an;
};

//definire structura
struct Angajat {
    char nume[20];
    char prenume[20];
    char ocupatia[20];
    struct data_nasterii dataNasterii;
    char sectia[20];
};

//def. functie de procesare date
void procesareDateAngajati(struct Angajat *angajati, int n);

int main() {
    int b;

    printf("Introduceti nr. de angajati: ");
    scanf("%d", &b);

    //alocare memorie data nasterii si angajat
    struct data_nasterii *data = (struct data_nasterii *) malloc(b * sizeof(struct data_nasterii));
    struct Angajat *angajati = (struct Angajat *) malloc(b * sizeof(struct Angajat));

    //citire date pentru angajati
    for (int i = 0; i < b; i++) {
        printf("\nNume angajat:");
        scanf("%s", angajati[i].nume);
        printf("Prenume angajat:");
        scanf("%s", angajati[i].prenume);
        printf("\nDate nasterii:");
        printf("Introduceti ziua:");
        scanf("%d", &angajati[i].dataNasterii.zi);
        printf("Introduceti luna:");
        scanf("%d", &angajati[i].dataNasterii.luna);
        printf("Introduceti anul");
        scanf("%d", &angajati[i].dataNasterii.an);

        printf("\nIntroduceti ocupatia:");
        scanf("%s", angajati[i].ocupatia);
        printf("Introduceti sectia:");
        scanf("%s", angajati[i].sectia);
    }

    //apelare functie
    procesareDateAngajati(angajati, b);

    //eliberare memorie
    free(data);
    free(angajati);
}

//functie care citeste datele angajatyilor si cauta inginerii apoi ii afiseaza
void procesareDateAngajati(struct Angajat *angajati, int n) {
    printf("Lista ingineri:");

    for (int i = 0; i < n; i++) {
        if (strcmp(angajati[i].ocupatia, "Inginer") == 0) {
            printf("%s %s \n", angajati[i].nume, angajati[i].prenume);
        }
    }
}






/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti nr. de angajati: 3

Nume angajat:Mirel
Prenume angajat:Ana

Date nasterii:Introduceti ziua:22
Introduceti luna:12
Introduceti anul2000

Introduceti ocupatia:Inginer
Introduceti sectia:Zootehnie

Nume angajat:Marc
Prenume angajat:Alex

Date nasterii:Introduceti ziua:9
Introduceti luna:8
Introduceti anul1995

Introduceti ocupatia:Receptioner
Introduceti sectia:HR

Nume angajat:Mihaelescu
Prenume angajat:Raimond

Date nasterii:Introduceti ziua:31
Introduceti luna:12
Introduceti anul1999

Introduceti ocupatia:Inginer
Introduceti sectia:Silvic
Lista ingineri:Mirel Ana
 Mihaelescu Raimond
Process finished with exit code 0

 * **/
