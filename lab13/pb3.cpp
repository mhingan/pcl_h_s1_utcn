//Program care citeste apoi afieseaza date preluare dintr-un fisier text, numele fisierului fiind citit de la tastatura
#include <stdio.h>


int main() {
    //definire pointer 
    FILE *fp;
    //variabila char care contine numele fisierului
    char nume_fis[20];
    //citire nume fisier de la tastatura
    printf("Introduceti numele fisierului din care se preiau numerele intregi: ");
    scanf("%s", nume_fis);
    //buffer care retine textul din fisier (in acest caz numere de tip int)
    char buffer[100];
    //deschid fisierul
    fp = fopen(nume_fis, "r+");

    //daca am gasit fisierul, printez ce este in el
    if (fp != NULL) {
        while (fgets(buffer, sizeof(buffer), fp) != NULL) {
            printf("%s", buffer);
        }
    } else {
        //daca fisierul nu a fost gasit printez o eroare
        perror("");
    }
    //inchid fisierul
    fclose(fp);

}



/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numele fisierului din care se preiau numerele intregi: noul_fisier.txt
1 2 3 4 5 6 7 8 9 10 11 12 13
14 15 16 17 18 19 20 21 22 23
24 25 26 27 28 29 30 31 32 33
34 35 36 37 38 39 40 41 42 43
Process finished with exit code 0
 * **/
