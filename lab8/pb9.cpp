//Program in care se citesc într-un tablou unidimensional “n” valori întregi şi se determină numărul elementelor negative impare.
// se afişeaza acest număr şi elementele respective.

#include <stdio.h>

int main() {
    int n;


    printf("Introduceti nr de elemente: ");
    scanf("%d", &n);
    int tab[n];


    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &tab[i]);
    }

    int nrNeg = 0;
    printf("\nNr negative impare:\n");
    for (int i = 0; i < n; i++) {
        if (tab[i] < 0 && tab[i] % 2 != 0) {
            nrNeg++;
            printf("%d ", tab[i]);
        }
    }

    printf("\n\nNr impare: %d\n", nrNeg);

}







/**


/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti nr de elemente: 4
Element 1: -1
Element 2: 3
Element 3: 4
Element 4: 5

Nr negative impare:
-1 

Nr impare: 1

Process finished with exit code 0

 * **/
