//Program care aloca memorie pentru n siruri de caractere
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    int n;
    printf("Introduceti numarul de siruri: ");
    scanf("%d", &n);

    //alocare memorie pentru n siruri de caractere
    char **siruri = (char *) malloc(n * sizeof(char));


    for (int i = 0; i < n; i++) {
        char sir[100];
        scanf("%s", &sir);
        //alocare pentru fiecare sir in parte
        siruri[i] = (char *) malloc((strlen(sir) + 1) * sizeof(char));
        //utilizand strcpy, copiez sirurl actual in tabloul siruri
        strcpy(siruri[i], sir);
    }

    //printare siruri introduse
    for (int i = 0; i < n; i++) {
        printf("Sirurile introduse:%s\n", siruri[i]);
    }

    //cu ajutorul unui for, eliberez zna de memorie pentru fiecare sir
    for (int i = 0; i < n; i++) {
        free(siruri[i]);
    }
    //eliberez zona de memorie alocata pentru n siruri
    free(siruri);

}





/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numarul de siruri: 2
sdf
asdfgh
Sirurile introduse:sdf
Sirurile introduse:asdfgh
Process finished with exit code 0

 * **/
