//Program care citeşte elementele a două tablouri unidimensionale de numere întregi şi afişează produsul scalar al acestora.
// Se va folosi o functie care preia elementele de la tastatură şi o altă funcţie, care calculează produsul scalar.

#include <stdio.h>

void citire_tab(int *tab, int n);
int prod_scalar(int *tab1, int *tab2, int n);


int main() {

    int n;

    //citesc numarul de el. al tabloului
    printf("Introduceti numarul de elemente ale tablourilor.: ");
    scanf("%d", &n);

    //verificare lungime tablou
    if (n <= 0 || n > 100) {
        printf("Numarul de elemente trebuie sa fie intre 1 si 100.\n");
    }

    int tablou1[100];
    int tablou2[100];

    //cu ajutorul functiei citire_tab, citesc tablourile
    citire_tab(tablou1, n);
    citire_tab(tablou2, n);

    int rezultat = prod_scalar(tablou1, tablou2, n);

    printf("Produsul scalar al tablourilor este: %d\n", rezultat);

}

// Functie pentru citirea elementelor unui tablou de la tastatura
void citire_tab(int *tab, int n) {
    printf("Introduceti elementele tabloului:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &tab[i]); // Utilizam direct indexarea tabloului
    }
}

// Functie pentru calculul produsului scalar
int prod_scalar(int *tab1, int *tab2, int n) {
    int rezultat = 0;
    for (int i = 0; i < n; i++) {
        rezultat += (*tab1++) * (*tab2++);
    }
    return rezultat;
}






/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numarul de elemente ale tablourilor.: 4
Introduceti elementele tabloului:
Element 1: 3
Element 2: 5
Element 3: 7
Element 4: 9
Introduceti elementele tabloului:
Element 1: 7
Element 2: 6
Element 3: 4
Element 4: 4
Produsul scalar al tablourilor este: 115

Process finished with exit code 0
 * **/

