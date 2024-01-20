//Program care determina valorea medie pentru numerele pozitve si negative dintr-un tablou.
#include <stdio.h>

#define DIM 20

float valMedPoz(int x[], int dim);

float valMedNeg(int x[], int dim);

int main(void) {
    int i, dim;
    int x[DIM];
    printf("\nIntroduceti dimensiunea tabloului: ");
    scanf("%d", &dim);
    if (dim > DIM) {
        printf("\n Dimensiune prea mare !");
        return 0;
    }
    printf("\n Introduceti elementele tabloului:\n");
    for (i = 0; i < dim; i++) {
        printf("\tx[%d] = ", i);
        scanf("%d", &x[i]);
    }
    printf("\n Valoarea medie pozitiva este: %.3f\n", valMedPoz(x, dim));
    printf("\n Valoarea medie negativa este: %.3f\n", valMedNeg(x, dim));
}

// Functia determina valoarea medie a elementelor pozitive din tablou
float valMedPoz(int x[], int n) {
    int i;
    float sum = 0;
    int count = 0;

    for (i = 0; i < n; i++)
        if (x[i] > 0) {
            sum += x[i];
            count++;
        }
    return sum / count;
}

// Functia determina valoarea medie a elementelor negative din tablou
float valMedNeg(int x[], int n) {
    int i;
    float sum = 0;
    int count = 0;

    for (i = 0; i < n; i++) {
        if (x[i] < 0) {
            sum += x[i];
            count++;
        }
    }
    return sum / count;
}

/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita

Introduceti dimensiunea tabloului: 4

 Introduceti elementele tabloului:
	x[0] = 1
	x[1] = 2
	x[2] = -1
	x[3] = -2

 Valoarea medie pozitiva este: 1.500

 Valoarea medie negativa este: -1.500

Process finished with exit code 0
 **/

