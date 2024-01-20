//Program care citeste doua numere intregi, apoi calculeaza aria cercului daca raza egal cu prima valoare.
//Si araia dreptunghiului cu laturile egale cu valorile date.
#include <stdio.h>
#include <math.h>


int main() {
    //in acest caz, a este atat raza cercului, cat si o latura a dreptunghiului
    int a;
    int b;
    float aria_cerc;
    int aria_dreptunghi;
    printf("Introduceti primul numar intreg:");
    scanf("%d", &a);
    printf("Introduceti al doilea numar intreg:");
    scanf("%d", &b);

    aria_cerc = M_PI * a * a;
    printf("Aria cercului calculata este: %f\n", aria_cerc);

    if (a == b) {
        printf("Numerele trebuie sa fie diferite pentru a putea calcula aria unui dreptunghi, daca sunt egale, este aria patratului.");
    } else {
        aria_dreptunghi = a * b;
        printf("Aria dreptunghiului calculata este: %d\n", aria_dreptunghi);
    }


}

/**
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introduceti primul numar intreg:3
Introduceti al doilea numar intreg:6
Aria cercului calculata este: 28.274334
Aria dreptunghiului calculata este: 18

Process finished with exit code 0

 * */
