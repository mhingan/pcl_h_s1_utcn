//Program care citeste de la tastatura mediile studentilor si afiseaza numarul elevilor cu media >=8
#include <stdio.h>

int nr_std(float *ptr);

int main() {
    //definesc un tablou cu mediile si un pointer
    float medii[10];
    float *ptr;
    printf("Introduceti mediile studentilor: ");

    //cu ajutorul functiei for preiau mediile studentilor de la tastatura
    for (int i = 0; i < 10; i++) {
        scanf("%f", &medii[i]);
    }

    //initializez pinterul
    ptr = medii;

    nr_std(ptr);
}

//definesc o noua functie care are ca paramentru un pointer
int nr_std(float *ptr) {
    int n = 0;
    float nota = 8.00;

    //cu un for verific daca valoare stocata in tabloul de pointeri este mai mare decat 8
    for (int i = 0; i < sizeof(ptr); i++) {
        if (nota <= ptr[i]) {
            n++;
        }
    }
    printf("Numarul studentilor care au media peste 8 este: %d", n);

    return n;
}




/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita fghjwd dfhje
Introduceti mediile studentilor: 6.89
9.08
8.77
3.09
9.88
6.79
8.00
7.99
9.88
6.98
Numarul studentilor care au media peste 8 este: 5
Process finished with exit code 0
 * **/
