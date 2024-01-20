//Program care preia de la tastatură “n” valori reale într-un tablou unidimensional, calculează cu o funcţie valoarea medie a valorilor introduse si afişează cu o altă
// funcţie doar valorile din tablou mai mari decît valoarea medie calculată.

#include <stdio.h>

float val_medie(int [], int);

void val_tab(int [], int, float);

int main() {
    int tab[10];

    printf("Introduceti valorile: ");
    for (int i = 0; i < sizeof(tab) / sizeof(tab[0]); i++) {
        printf("tab[%d]: ", i);
        scanf("%d", &tab[i]);
    }

    int dimensiune = sizeof(tab) / sizeof(tab[0]);
    float media = val_medie(tab, dimensiune);

    printf("Valoarea medie: %.2f\n", media);

    printf("Valori mai mari decat media:\n");
    for (int i = 0; i < dimensiune; i++) {
        if (tab[i] > media) {
            printf("%d\t", tab[i]);
        }
    }
}

float val_medie(int tab[], int dimensiune) {
    int sum = 0;
    for (int i = 0; i < dimensiune; i++) {
        sum += tab[i];
    }
    return (float)sum / dimensiune;
}




/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti valorile: tab[0]: 1
tab[1]: 2
tab[2]: 3
tab[3]: 1
tab[4]: 2
tab[5]: 3
tab[6]: 1
tab[7]: 2
tab[8]: 3
tab[9]: 1
Valoarea medie: 1.90
Valori mai mari decat media:
2	3	2	3	2	3	
Process finished with exit code 0

 * **/
