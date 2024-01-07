//Program care afiseaza catul unei imprtiri prin scaderi succesive;
#include <stdio.h>

int impartire(int a, int b);

int main() {
    int numarator, numitor;

    printf("Introdu numaratorul: ");
    scanf("%d", &numarator);

    printf("Introdu numitorul: ");
    scanf("%d", &numitor);

    int rezultat = impartire(numarator, numitor);

    printf("Catul impartirii este %d\n", rezultat);

    return 0;
}

//cu ajutorul unui while loop realizez scaderile succesive si ii dau valoare lui cat;
int impartire(int a, int b) {
    int cat = 0;

    while (a >= b) {
        a -= b;
        cat++;
    }

    return cat;
}

/**
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introdu numaratorul: 10
Introdu numitorul: 5
Catul impartirii este 2

Process finished with exit code 0
 **/
