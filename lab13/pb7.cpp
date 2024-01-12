//Program care citeste un text din fisier si il afiseaza
#include <stdio.h>

void citire_date();

int main() {
    citire_date();
}

void citire_date() {
    FILE *fp;
    char nume[20];
    printf("Introduceti numele fisierului:");
    scanf("%s", nume);
    char buffer[100];

    fp = fopen(nume, "r");

    if (fp != NULL) {
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            printf("%s", buffer);
        }
    } else{
        perror("");
    }

    fclose(fp);

}



/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numele fisierului:noul_fisier.txt
Caracteristicile cheie ale limbajului de programare C includ portabilitatea, eficiența și accesul direct la memoria computerului. Acesta a avut o influență semnificativă asupra multor alte limbaje de programare, inclusiv C++, C#, și multe altele.
Process finished with exit code 0

**/

