//Program care citeste 3 numere de la tastatura si caclueaza aria drptunghiului cu primele 2,
// de asemenea verifica daca diagonala dreptunghiului este egala cu al trilea numar;

#include <stdio.h>
#include <math.h>


int main() {
    float a, b, c;
    printf("Introduceti lungimea laturei a: ");
    scanf("%f", &a);
    printf("Introduceti lungimea laturei b: ");
    scanf("%f", &b);
    printf("Introduceti lungimea laturei c: ");
    scanf("%f", &c);

    float aria = a * b;

    //verifica daca diagonala este egala cu 2, folosinf teorema lui Pitagora;
    //functia pow ridica baza (c) la puterea specificata de exmponent (2);
    if (pow(c, 2) == pow(a, 2) + pow(b, 2)) {
        printf("Aria dreptunghiului este %.2f, iar diagonala este egala cu %f.\n",aria, c);
    } else {
        printf("Aria dreptunghiului este %.2f, iar diagonala nu este egala cu %f.\n", a, b, aria, c);
    }

}

/**
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introduceti lungimea laturei a: 5
Introduceti lungimea laturei b: 4
Introduceti lungimea laturei c: 4
Aria dreptunghiului este 5.00, iar diagonala nu este egala cu 4.000000.

Process finished with exit code 0
 * */

