//Program care citeste de la tastatura n numar de produse, produsul cu cel mia mic nr de stoc o sa fie afisat.
#include <stdio.h>
#include <stdlib.h>

//definire structura cu denumire, pret si cantitate
struct Produs {
    char denumire[30];
    float pret;
    int cantitate;
};

//functia de procesare  a datelor introduse
void procesareDateProdus(struct Produs *, int n);


int main() {
    int n;
    //citirea numarului de produse
    printf("Introduceti numarul de produse:");
    scanf("%d", &n);

    //alocare memorie
    struct Produs *produse = (struct Produs *) malloc(n * sizeof(struct Produs));

    //citirea datelor de la tastatura pentru n produse
    for (int i = 0; i < n; i++) {
        printf("Introduceti denumirea produsului:");
        scanf("%s", produse[i].denumire);
        printf("Introduceti pretul produsului:");
        scanf("%f", &produse[i].pret);
        printf("Introduceti cantitatea:");
        scanf("%d", &produse[i].cantitate);
    }

    //apelarie functie de procesare a datelor
    procesareDateProdus(produse, n);

    //eliberare memorie
    free(produse);


}

//functie care cauta cel mai mare stoc al produselor
void procesareDateProdus(struct Produs *produs, int n) {
    int max = 0;
    
    //cu ajutorul unui for parcurg lista de produse si verific ce produs are cel mai mare stoc, apoi afisez
    for (int i = 0; i < n; i++) {
        if (produs[i].cantitate > produs[max].cantitate) {
            max = i;
        }
    }

    printf("\n\tProdusul cu cea mai mare cantitate este %s. Cantitate:%d", produs[max].denumire, produs[max].cantitate);

}

/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numarul de produse:3
Introduceti denumirea produsului:Biscuiti
Introduceti pretul produsului:3.2
Introduceti cantitatea:23
Introduceti denumirea produsului:Ciocolata
Introduceti pretul produsului:5.7
Introduceti cantitatea:21
Introduceti denumirea produsului:CocaCola
Introduceti pretul produsului:8.9
Introduceti cantitatea:12

	Produsul cu cea mai mare cantitate este Biscuiti. Cantitate:23
Process finished with exit code 0
 * **/
