//Program care interclaseaza doua tablouri si reurneaza unul singur cu elemente unice
#include <stdio.h>

void interclasare_array(int *arr1, int size1, int *arr2, int size2, int *result);

int main() {
    //definesc primul tablou de elemnte
    int A[] = {1, 3, 5, 7, 9, 10};
    //definesc o variabila care o sa fie egala cu numarul total de elemente al tabloului (utilizand sizeof(a)/sizeof(int) => 500/100 = 5)
    int sizeA = sizeof(A) / sizeof(int);

    //definesc al doilea tablou de elemente
    int B[] = {2, 4, 6, 8};
    //definesc o var. care o sa fie egala cu numaul de el. din tablou
    int sizeB = sizeof(B) / sizeof(int);

    //definsec un tablou pentru interclasare
    int result[sizeA + sizeB];

    //apelez functia de interclasare
    interclasare_array(A, sizeA, B, sizeB, result);

    //utilizand un for, printez fiecare element din tabloul interclasat
    printf("Tablou interclasat: ");
    for (int i = 0; i < sizeA + sizeB; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}

void interclasare_array(int *arr1, int size1, int *arr2, int size2, int *result) {
    int i = 0, j = 0, k = 0;

    // Iterăm peste ambele tablouri
    while (i < size1 && j < size2) {
        // compar elementele din cele doua tablouri
        //functia verifica daca elementul din primul tablou este < decat el. din al doilea tablou
        if (arr1[i] < arr2[j]) {
            //daca elementul este mai mic, il adauga in tabloul "result"
            result[k++] = arr1[i++];
        } else {
            //daca elementul este mai mare, il adauga in tabloul "result" pe celalalt numar
            result[k++] = arr2[j++];
        }
    }

    // verific daca mai sunt elemente in primul tablou si le adaug la sfarsit
    while (i < size1) {
        result[k++] = arr1[i++];
    }

    // verific daca mai sunt elemente in al doilea tablou si le adaug la sfarsit
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

/**
 /Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Tablou interclasat: 1 2 3 4 5 6 7 8 9 10 
Process finished with exit code 0
 * */
