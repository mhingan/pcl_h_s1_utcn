//Program care citeste elementele a doua matrici si returneaza suma lor sub forma altei matrici
#include <stdio.h>
#include <stdlib.h>

int **alocareMemorie(int m, int n);

int **sumaMatrice(int **matrice1, int **matrice2, int m, int n);

void afisare_matrice(int **matrice, int m, int n);

void cleanMemory(int **matrice, int m);

int main() {
    int m, n;
    printf("Introduceti numarul de linii: ");
    scanf("%d", &m);
    printf("Introduceti numarul de coloane: ");
    scanf("%d", &n);

    //aloc memorie pentru matricile 1 si 2
    int **matrice1 = alocareMemorie(m, n);
    int **matrice2 = alocareMemorie(m, n);

    //citesc datele primei matrici
    printf("Introduceti datele primei matrici:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrice1[i][j]);
        }
    }

    //citesc datele celei de-a doua matrici
    printf("Introduceti datele matricei doi:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrice2[i][j]);
        }
    }

    //calculez suma matricilor
    int **rezultat = sumaMatrice(matrice1, matrice2, m, n);

    //printez matricea 1
    printf("\nMatricea 1:\n");
    afisare_matrice(matrice1, m, n);

    //printez matricea 2
    printf("\nMatricea 2:\n");
    afisare_matrice(matrice2, m, n);

    //printez suma 
    printf("\nSuma celor doua matrici:\n");
    afisare_matrice(rezultat, m, n);

    // eliberez memoria alocata anterior
    cleanMemory(matrice1, m);
    cleanMemory(matrice2, m);
    cleanMemory(rezultat, m);

    return 0;
}

//functie pentru alocarea memoriei
int **alocareMemorie(int m, int n) {
    //aloc memorie pentru matrice
    int **matrice = (int **)malloc(m * sizeof(int *));
    
    for (int i = 0; i < m; i++) {
        matrice[i] = (int *)malloc(n * sizeof(int));
    }

    return matrice;
}

//functie care calculeaza suma matricilor
int **sumaMatrice(int **matrice1, int **matrice2, int m, int n) {
    //aloc memorie pentru matricea suma
    int **rezultat = alocareMemorie(m, n);
    //cu ajutorul a doua for loop-uri parcurg elementele matricilor
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            //adun fiecare elemnt din matricea 1 cu fiecare element din matricea 2, si le stochez in matricea suma
            rezultat[i][j] = matrice1[i][j] + matrice2[i][j];
        }
    }
    return rezultat;
}

//functie care afiseaza matricile
void afisare_matrice(int **matrice, int m, int n) {
    //cu ajutorul a doua for loop-uri, parcurg elemntele matricilor si le afisez
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

//functie care elibereaza zona de memorie
void cleanMemory(int **matrice, int m) {
    for (int i = 0; i < m; i++) {
        //utilizand functia free eliberez zona de memorie pentru fiecare linie din matrice
        free(matrice[i]);
    }
    free(matrice);
}


/**
 /Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti numarul de linii: 2
Introduceti numarul de coloane: 2
Introduceti datele primei matrici:
1
2
3
4
Introduceti datele matricei doi:
4
3
2
1

Matricea 1:
1 2 
3 4 

Matricea 2:
4 3 
2 1 

Suma celor doua matrici:
5 5 
5 5 

Process finished with exit code 0

 * **/
