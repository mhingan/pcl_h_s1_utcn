//Program care citeste datele pt. mai multe prajituri si apoi afiseaza prajitua cea mai ieftina
#include <stdio.h>
#include <stdlib.h>

#define MAX_NUME 50

//definire structura
struct Prajitura {
    char nume[MAX_NUME];
    int numar_buc;
    float pret;
};

int main() {
    FILE *fp;
    int n;

    // Numele fisierului
    char nume[] = "prajiturelele.bin";

    //deschidere fisier
    fp = fopen(nume, "wb+");

    //citire nr. prajituri
    printf("Introduceti nr. de prajituri:");
    scanf("%d", &n);

    // Alocare memorie pentru n prajituri
    struct Prajitura *prajituri = (struct Prajitura *)malloc(n * sizeof(struct Prajitura));

    //verific daca fisierul a fost creat
    if (fp != NULL) {
        //citesc datele pentru n prajituir si le scriu infisier binar
        printf("Introduceti detaliile prajiturilor:");
        for (int i = 0; i < n; i++) {
            printf("\nNume: ");
            scanf("%s", prajituri[i].nume);
            fprintf(fp, "%s", prajituri[i].nume);

            printf("\nNumar de bucati: ");
            scanf("%d", &prajituri[i].numar_buc);
            fprintf(fp, " %d", prajituri[i].numar_buc);

            printf("\nPretul: ");
            scanf("%f", &prajituri[i].pret);
            fprintf(fp, " %.2f", prajituri[i].pret);
        }

        //verific pretul cel mai mic al prajiturilor
        float min = prajituri[0].pret;
        for (int i = 1; i < n; i++) {
            if (prajituri[i].pret < min) {
                min = prajituri[i].pret;
            }
        }

        //printez prajitura cu cel mai mic pret
        printf("\nPrajiturile cu cel mai mic pret sunt:");
        for (int i = 0; i < n; i++) {
            if (prajituri[i].pret == min) {
                printf("\n%s %d %.2f", prajituri[i].nume, prajituri[i].numar_buc, prajituri[i].pret);
            }
        }

    } else {
        perror("Eroare la deschiderea fisierului");
    }

    // Eliberare memorie alocata dinamic
    free(prajituri);

    fclose(fp);

}

/**
 /Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti nr. de prajituri:2
Introduceti detaliile prajiturilor:
Nume: P1

Numar de bucati: 23

Pretul: 23.78

Nume: P2

Numar de bucati: 12

Pretul: 12.49

Prajiturile cu cel mai mic pret sunt:
P2 12 12.49
Process finished with exit code 0

 * **/
