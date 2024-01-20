	//Program care citeste de la tastatura n numar de masinin, aloca memorie pentru ele, apoi afiseaza doar anumite masini.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

//delcarare structura de masini (cu an, capacitate si culoare)
struct Masina {
    int an_fabricatie;
    char capacitate_cilindrica[10];
    char culoare[10];
};

//definire functie procesareDate
void procesareDate(struct Masina *);

int main() {
    struct Masina masina[MAX];
    procesareDate(masina);

}

//functia procesareDate care aloca memorie pentru nr. de masini, verifica daca masinile au anul >2010 si culoare == Rosu, dupa care le afiseaza
void procesareDate(struct Masina *masina) {
    int n;
    printf("Introduceti numarul de masini: ");
    scanf("%d", &n);

    // Alocare spatiu pentru n masini
    masina = (struct Masina *)malloc(n * sizeof(struct Masina));


    for (int i = 0; i < n; i++) {
        printf("Introduceti anul fabricatiei: ");
        scanf("%d", &masina[i].an_fabricatie);
        printf("Introduceti capacitatea cilindrica: ");
        scanf("%s", masina[i].capacitate_cilindrica);
        printf("Introduceti culoarea masinii: ");
        scanf("%s", masina[i].culoare);
    }

    for (int i = 0; i < n; i++) {
        if (strcmp(masina[i].culoare, "Rosu") == 0 && masina[i].an_fabricatie >= 2010) {
            printf("\nMasina: \n");
            printf("An fabricatie: %d\n", masina[i].an_fabricatie);
            printf("Capacitate cilindrica: %s\n", masina[i].capacitate_cilindrica);
            printf("Culoare: %s\n", masina[i].culoare);
        }
    }

    // Eliberare memorie alocata
    free(masina);
}

/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numarul de masini: 3
Introduceti anul fabricatiei: 2002
Introduceti capacitatea cilindrica: 1.4l
Introduceti culoarea masinii: Rosu
Introduceti anul fabricatiei: 2019
Introduceti capacitatea cilindrica: 1.3l
Introduceti culoarea masinii: Verde
Introduceti anul fabricatiei: 2024
Introduceti capacitatea cilindrica: 2.9l
Introduceti culoarea masinii: Rosu

Masina:
An fabricatie: 2024
Capacitate cilindrica: 2.9l
Culoare: Rosu

Process finished with exit code 0
 * **/
