//Program care citeste un sir de numere de la tastatura si le returneaza in ordine crescatoare
#include <stdio.h>


int main() {
    int dim;
    int tab_neordonat[dim];

    printf("Introduceti dimensiunea tabloului: ");
    scanf("%d", &dim);

    if (dim <= 0) {
        printf("Dimensiunea trebuie sa fie un numar pozitiv");
    } else {


        printf("Introduceti elementele tabloului:\n");
        for (int i = 0; i < dim; i++) {
            printf("\tx[%d] = ", i);
            scanf("%d", &tab_neordonat[i]);
        }

        //Sortare sir cu ajutorul metodei BubbleSort
        for (int i = 0; i < dim - 1; i++) {
            for (int j = 0; j < dim - i - 1; j++) {
                if (tab_neordonat[j] > tab_neordonat[j + 1]) {
                    //creez o variabila numita actual care are val el. curent de la j
                    int actual = tab_neordonat[j];
                    //Atribui el. de la indexul j valoarea el. de la indexul j+1
                    tab_neordonat[j] = tab_neordonat[j + 1];
                    //Atribui el. de la indexul j+1 valoare curenta a lui actual
                    tab_neordonat[j + 1] = actual;
                }
            }
        }

        printf("Sir de nr ordonat:\n");
        for (int i = 0; i < dim; i++) {
            printf("%d ", tab_neordonat[i]);
        }
    }


}





/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti dimensiunea tabloului: 5
Introduceti elementele tabloului:
	x[0] = 4
	x[1] = 3
	x[2] = 8
	x[3] = 0
	x[4] = 1
Sir de nr ordonat:
0 1 3 4 8
Process finished with exit code 0
 * **/
