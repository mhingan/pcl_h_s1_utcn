//Program care citeste de la tastatura n numere si returneaza suma elementelor negative
#include <stdio.h>
#include <stdlib.h>

int sum(const int elements[], int n);

int main() {
    int n;

    printf("Introduceti numarul de elemente: ");
    scanf("%d", &n);

    //alocarea dinamica a zonei de memorie pentru tabloul numbers
    int *numbers = (int*)malloc(n * sizeof(int));

    //verific cate elemnte trebuie sa aiba numbers, daca lungimea e egala cu 0, retrunez eroare
    if (numbers == NULL) {
        printf("Eroare la alocarea memoriei.");
        return 1;
    }

    //daca este diferit de 0, citesc de la tastatura valorile
    printf("Introduceti elementele tabloului:\n");
    for (int i = 0; i < n; i++) {
        printf("element-%d = ", i);
        scanf("%d", &numbers[i]);
    }

    //calculez suma elementelor negative
    int suma = sum(numbers, n);
    printf("Suma elementelor negative din tablou este %d\n", suma);

    //eliberez zona de memorie alocata dinamic
    free(numbers);

    return 0;
}

//cu ajutorul unui for, parcurg elementele din tablou si efectuez suma elementelor negative
int sum(const int elements[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (elements[i] < 0) {
            sum += elements[i];
        }
    }
}

/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numarul de elemente: 5
Introduceti elementele tabloului:
element-0 = 1
element-1 = -2
element-2 = -4
element-3 = 6
element-4 = 0
Suma elementelor negative din tablou este -6

Process finished with exit code 0
 **/
