//aplicaţie C, care alocă dinamic memorie pentru datele a N studenţi, (nume,
//prenume si gen), citeşte datele pentru fiecare din aceştia, afişează numărul studentelor si
// elibereaza memoria alocată.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//definire structura
struct Student {
    char nume[20];
    char prenume[20];
    char gen[10];
};

//def. functie de procesare date
void procesareDateStudenti(struct Student *studenti, int n);

int main() {
    int a;

    printf("introduceti numarul de studenti:");
    scanf("%d", &a);

    //alocare memorie
    struct Student *studenti = (struct Student *) malloc(a * sizeof(struct Student));


    //citire date pentru n studenti
    for (int i = 0; i < a; i++) {
        printf("\nNume student: ");
        scanf("%s", studenti[i].nume);
        printf("Prenume student: ");
        scanf("%s", studenti[i].prenume);
        printf("Gen: ");
        scanf("%s", studenti[i].gen);
    }

    //apelare functie
    procesareDateStudenti(studenti, a);

    //eliberare memorie
    free(studenti);
}


//functie care verifica date studentii au gen feminin, si apoi ii afiseaza
void procesareDateStudenti(struct Student *studenti, int n) {
    printf("Lista fete:");

    for (int i = 0; i < n; i++) {
        if(strcmp(studenti[i].gen,"Feminin")==0){
            printf("%s %s\n", studenti[i].nume, studenti[i].prenume);
        }
    }
}


/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
introduceti numarul de studenti:3

Nume student: Ioana
Prenume student: Grama
Gen: Feminin

Nume student: Mihai
Prenume student: Marius
Gen: Masculin

Nume student: Mihaelescu
Prenume student: Adriana
Gen: Feminin
Lista fete:Ioana Grama
Mihaelescu Adriana

Process finished with exit code 0

 * **/
