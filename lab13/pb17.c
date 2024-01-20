//Program care citeste de la tastatura mai multe numere float, verifica poztitia lor in fisier, si pe cele de pe poztitia impara le sorteaza ca pare sau impare
#include <stdio.h>

//def. functie pt. verificare daca e nr. par sau impar
void par_impar(float numar);

//def. functie pt. poztitia in sir
void sir_position(const float sir[], int n);

int main() {
    //pointer
    FILE *fp;
    int n;
    //numele fisierului
    char nume[] = "fisier_bin_nou.bin";

    //deschid fisier
    fp = fopen(nume, "w+b");

    //citesc nr. de numere
    printf("Cate numere doriti sa introduceti? ");
    scanf("%d", &n);

    //definesc sirul de numere
    float numere[n];

    //verific daca fisierul a fost deschis
    if (fp != NULL) {
        //citesc numerele de la tastatuar si le adaug in fisier
        printf("Introduceti numerele:\n");
        for (int i = 0; i < n; i++) {
            printf("[%d]: ", i);
            scanf("%f", &numere[i]);
            fprintf(fp, "%.2f", numere[i]);
        }
        
        //apelez functia de pozitie in sir a numerelor
        sir_position(numere, n);

    } else {
        perror("Eroare la deschiderea fisierului");
    }

    fclose(fp);
}

// verifica daca un nr. este par sau impar
void par_impar(float numar) {
    if ((int)numar % 2 == 0) {
        printf("\n%.2f este numar par.", numar);
    } else {
        printf("\n%.2f este numar impar.", numar);
    }
}

// afisare numere de pe pozitii impare si verificare daca acestea sunt pare sau impare
void sir_position(const float sir[], int n) {
    for (int i = 0; i < n; i++) {
        if (i % 2 != 0) {
            par_impar(sir[i]);
        }
    }
}

/**
 /Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Cate numere doriti sa introduceti? 3
Introduceti numerele:
[0]: 1
[1]: 2
[2]: 3

2.00 este numar par.
Process finished with exit code 0

 * **/
