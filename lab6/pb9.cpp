//Program care calculeaza produsul dintre doua numere prin adunari succesive;
#include <stdio.h>

int produs_adunari(int a, int b);

int main() {
    int nr_a, nr_b;

    printf("Introdu primul numar: ");
    scanf("%d", &nr_a);

    printf("Introdu al doilea numar: ");
    scanf("%d", &nr_b);

    //apelez functia produs_adunari, care realizeaza adunarile succesive
    int rezultat = produs_adunari(nr_a, nr_b);

    printf("Produsul celor doua numere este: %d\n", rezultat);

    return 0;

}

//Definiesc o noua functie care utilizand un for loop, realizeaza adunari succesive ajungand la rezultatul a*b=c;
int produs_adunari(int a, int b) {
    int produs = 0;

    for (int i = 0; i < b; i++) {
        produs += a;
    }

    return produs;
}

/**
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introdu primul factor: 4
Introdu al doilea factor: 6
Produsul a 4 cu 6 este: 24

Process finished with exit code 0
 * */

