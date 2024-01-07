//Program care citeste de la tastatura mai multe nume de studenti si returneaza studetii straini.
#include <stdio.h>
#include <string.h>

#define MAX 100

//declarare structura Student (cu nume, prenume, tara, grupa, anul nasterii;
struct Student {
    char nume[30],
            prenume[30],
            tara[15],
            grupa[20];
    int anul_nasterii[5];
};

void citireDate(struct Student *);
void afisareDate(struct Student *);

int main() {
    //numarul maxim de studenti este 100
    struct Student studenti[MAX];

    citireDate(studenti);
    afisareDate(studenti);

}

//functie care citeste datele studentilor
void citireDate(struct Student *studenti) {
    int nr;
    printf("Introduceti numarul de studenti:");
    scanf("%d", &nr);

    if (nr <= 0) {
        printf("Numarul de elevi nu poate fi negativ sau 0");
        return;
    }

    for (int i = 0; i < nr; i++) {
        printf("Introduceti numele studentului: ");
        scanf("%s", studenti[i].nume);
        printf("Introduceti prenumele studentului: ");
        scanf("%s", studenti[i].prenume);
        printf("Introduceti tara studentului: ");
        scanf("%s", studenti[i].tara);
        printf("Introduceti grupa studentului: ");
        scanf("%s", studenti[i].grupa);
        printf("Introduceti anul nasterii: ");
        scanf("%d", &studenti[i].anul_nasterii);
    }
}

//functie care afiseaza datele studentilor
void afisareDate(struct Student *studenti) {
    int nr;
    printf("Studenti din afara Romaniei:\n");
    for (int i = 0; i < nr; i++) {
        if (strcmp(studenti[i].tara, "Romania") != 0) {
            printf("\nNumele studentului: %s\n", studenti[i].nume);
            printf("Prenumele studentului: %s\n", studenti[i].prenume);
            printf("Tara studentului: %s\n", studenti[i].tara);
            printf("Grupa studentului: %s\n", studenti[i].grupa);
            printf("Anul nasterii studentului: %d\n", &studenti[i].anul_nasterii[0]);
        }
    }
}

/**
 /Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numarul de studenti:2
Introduceti numele studentului: Mihaita
Introduceti prenumele studentului: Hingan
Introduceti tara studentului: Romania
Introduceti grupa studentului: 2512
Introduceti anul nasterii: 2002
Introduceti numele studentului: Mircea
Introduceti prenumele studentului: Baba
Introduceti tara studentului: Rusia
Introduceti grupa studentului: 2512
Introduceti anul nasterii: 2002
Studenti din afara Romaniei:

Numele studentului: Mircea
Prenumele studentului: Baba
Tara studentului: Rusia
Grupa studentului: 2512
Anul nasterii studentului: 2002

Process finished with exit code 0

 * **/
