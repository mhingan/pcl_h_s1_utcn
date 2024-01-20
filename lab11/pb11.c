//PROGRAM CARE CITESTE N SIRURI DE LA TASTATURA SI RETURNEAZA VALORILE PARE
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int n;
    printf("Introduceti numarul de siruri: ");
    scanf("%d", &n);

    //alocare memorie pentru siruri de pointeri
    const char **siruri = (const char **)malloc(n * sizeof(char *));

    //citesc si aloc memorie pentru fiecare sir
    printf("Introduceti sirurile:");
    for(int i=0; i<n; i++){
        char sir[100];
        scanf("%s,", sir);

        //alocare memorie pentru fiecare sir in parte utilizand functia strdup
        siruri[i] = strdup(sir);
    }

    //afisare valori pare din tablou
    for(int i=0; i<n; i+=2){
        printf("%s", siruri[i]);
    }

    //eliberare zona de memorie
    for(int i=0; i<n; i++){
        free((void *)siruri[i]);
    }
    free(siruri);
}

/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numarul de siruri: 5
Introduceti sirurile:sirul1
sirul2
sirul3
sirul4
sirul5
sirul1sirul3sirul5
Process finished with exit code 0
 * **/
