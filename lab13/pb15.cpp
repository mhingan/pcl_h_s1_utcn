//program care scrie 8 numere intr-un fisier binar, apoi le citeste pe primle 4 si face media aritmetica a acestora
#include <stdio.h>

int main() {
    //pointeri fisiere
    FILE *fp1, *fp2;
    char fisier1[30];
    char fisier2[30];

    //citire nume fisiere
    printf("Introduceti numele primului fisier: ");
    scanf("%s", fisier1);

    printf("Introduceti numele fisierului doi: ");
    scanf("%s", fisier2);

    int numere[8];

    //deschidere fisier 1
    fp1 = fopen(fisier1, "w+b");

    //verificare daca fisierul a fost deschis
    if (fp1 == NULL) {
        perror("Eroare la deschiderea fisierului 1");
        return 1;
    }

    /
    fp2 = fopen(fisier2, "w+");

    if (fp2 == NULL) {
        perror("Eroare la deschiderea fisierului 2");
        fclose(fp1);  // Închide primul fișier în caz de eroare
        return 1;
    }

    //citire numere de la tastatura
    printf("Introduceti numerle: ");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &numere[i]);
        fprintf(fp1, "%d ", numere[i]);
    }

    //inchidere fisier 1
    fclose(fp1);

    //deschidere fisier 1 pentru citire
    fp1 = fopen(fisier1, "rb");

    if (fp1 == NULL) {
        perror("Eroare la redeschiderea fisierului 1 pentru citire");
        fclose(fp2);  // Închide al doilea fișier în caz de eroare
        return 1;
    }

    int nr1, nr2, nr3, nr4;
    float media;

    //citesc primlee 4 numere din fisier si fac media lor aritmetica, dupa care o scriu in fisierul 2
    while (fscanf(fp1, "%d %d %d %d", &nr1, &nr2, &nr3, &nr4) == 4) {
        int suma = nr4 + nr3 + nr2 + nr1;
        media = (float) suma / 4;
        fprintf(fp2, "Media aritmetica primelor 4 numere este %.2f\n", media);
        printf("M. aritmetica: %.2f\n", media);

    }


//inchid fisierele
    fclose(fp1);
    fclose(fp2);

}

/**
 /Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numele primului fisier: test.bin
Introduceti numele fisierului doi: test.txt
Introduceti numerle: 1
2
3
4
5
6
7
8
M. aritmetica: 2.50
Process finished with exit code 0
 * **/
