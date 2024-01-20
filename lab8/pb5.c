//Program care citeşte de la tastatura două siruri de caractere reprezentand numele si
//prenumele unei persoane. Apoi le afiseaza cu majusculă, separate prin două spatii de tabulare.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char nume[50], prenume[50];

    //cu ajutorul functie fgets citesc linia de text aferenta numelui
    //stdin fiind predefinit pt a citi textul de la tastatura daca folosim funtia de mai sus
    printf("Introduceti numele: ");
    fgets(nume, sizeof(nume), stdin);

    printf("Introduceti prenumele: ");
    fgets(prenume, sizeof(prenume), stdin);


    for (int i = 0; i < strlen(nume); i++) {
        nume[i] = toupper(nume[i]);
    }

    for (int i = 0; i < strlen(prenume); i++) {
        prenume[i] = toupper(prenume[i]);
    }

    printf("\nNume: %s \t\t  Prenume: %s", nume, prenume);

}





/**

/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numele: mihaita
Introduceti prenumele: hingan

Nume: MIHAITA
 		  Prenume: HINGAN

Process finished with exit code 0

 * **/
