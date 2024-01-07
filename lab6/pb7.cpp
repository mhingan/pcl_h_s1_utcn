//Program care afiseaza divizorii unui numar
#include <stdio.h>

int main() {
    int numar;
    printf("Introduceti un numar: ");
    scanf("%d", &numar);

    printf("Divizorii numarului sunt: ", numar);

    for (int i = 1; i <= numar; i++) {
        if (numar % i == 0) {
            printf("%d ", i);
        }
    }

}


/**
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introduceti un numar: 22
Divizorii numarului sunt: 1 2 11 22 
Process finished with exit code 0
 * */

