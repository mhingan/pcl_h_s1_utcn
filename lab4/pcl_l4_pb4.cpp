/*Citire 3 caractere de la tastaura, returnare caractere citite sub forma de "A.B.C".*/
#include <iostream>

int main() {
    char sir[3];
    //Am folosit "%s" in loc de "%c" deoarece returnez mai multe caratere, nu doar unul.
    scanf("%s", sir);
    printf("Ai introdus: %c.%c.%c", sir[0], sir[1], sir[2]);

    return 0;
}

/**
 * /Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
asd
Ai introdus: a.s.d
Process finished with exit code 0 **/
