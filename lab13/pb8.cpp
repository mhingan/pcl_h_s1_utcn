//Program care citeste mai multe numere de tip float de la tastatura, le adauga intr-un fisier cu numele citit tot de la tastatura si afiseaza valorile mai mari decat
//o valoare data de utilizator si citita tot de la tastatura.
#include <stdio.h>

void process_numbers(float sir[], float b);

int main() {
    int n;
    FILE *fp;
    char nume[20];

    //citesc numele fisierului
    printf("Introduceti numele fisierului:");
    scanf("%s", nume);

    //deschid fisierul
    fp = fopen(nume, "a+");

    //citesc nr de date pe care vreau sa il introduc
    printf("Introduceti numarul de date pe care vreti sa le adaugati in fisier:");
    scanf("%d", &n);

    //creez sirul de numere float
    float numere[n];

    //verific daca fisierul a fost deschis
    if (fp != NULL) {
        //cu ajutorul unui for citesc datele de la tasttatura si le printez in tabel
        for (int i = 0; i < n; i++) {
            printf("[%d] = ", i);
            scanf("%f", &numere[i]);
            fprintf(fp, "%f", &numere[i]);
        }
        //definesc o variabila b care are rol de numar de referinta
        float b;
        printf("Introduceti un numar pentru a afisa numerele mai mari decat acesta:");
        scanf("%f", &b);

        //apelez unctia process_numbers pentrru a afisa doar numerele mai mari decat b
        process_numbers(numere, n);
        
    } else {
        perror("");
    }

    //inchid fisierul
    fclose(fp);

}

//functie care verifica daca numerle dint-un sir sunt mai mari decat un anumit numar
void process_numbers(float sir[], float b) {
    printf("Numere mai mici decat %.2f sunt:", b);
    for (int i = 0; i < sizeof(sir); i++) {
        if (sir[i] > b) {
            printf("\n%.2f", sir[i]);
        }
    }
}





/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numele fisierului:test_file.txt
Introduceti numarul de date pe care vreti sa le adaugati in fisier:5
[0] = 1.3
[1] = 0.9
[2] = 8.8
[3] = 9.6
[4] = 5.0
Introduceti un numar pentru a afisa numerele mai mari decat acesta:5
Numere mai mici decat 5.00 sunt:
8.80
9.60
Process finished with exit code 0
**/

