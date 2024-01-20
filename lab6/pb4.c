//Calcul factorial pentru un numarul n citit de la tastatura.

#include <stdio.h>
#include <math.h>


int main() {
    int n;
    int factorialul = 1;
    printf("Introduceti un numar intreg pozitiv: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Nu se poate calcula factorial pentru un numar negativ");
    } else {
        //utilizand un for, inmultesc numarul de n ori si asignez valoarea variabilei factorialul;
        for (int i = 1; i <= n; i++) {
            factorialul *= i;
        }
        printf("%d! = %d\n", n, factorialul);
    }

}

/**
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introduceti un numar intreg pozitiv: 5
5! = 120

Process finished with exit code 0
 * */

