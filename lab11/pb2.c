//Program care citeste date de la tastatura pentru 5 birouri din cate 3 orase si returneaza media vanzarilor
#include <stdio.h>
#include <stdlib.h>

#define MAX_ORAS 3
#define MAX_BIROU 5

// Structura pentru stocarea datelor de vanzari
typedef struct {
    float *vanzari_birou; // pointer catre datele de vanzari pentru fiecare birou
} Oras;

void insertDataForCities(Oras *oras);

float totalSells(const Oras *oras);

void cleanMemory(Oras *oras);

int main() {
    Oras orase_tab[MAX_ORAS];

    //introducere date pentru fiecare oras si birou
    for (int i = 0; i < MAX_ORAS; i++) {
        insertDataForCities(&orase_tab[i]);
    }

    float mediaTotal = 0;
    //cu ajutorul unui for printez datele pentru fiecare oras, si adun toate vanzarie intr- variabila mediaTotal
    for (int i = 0; i < MAX_ORAS; i++) {
        float totalOras = totalSells(&orase_tab[i]);
        printf("Total vanzari pentru orasul %d: %.2f\n", i + 1, totalOras);
        mediaTotal += totalOras;
    }

    //calculare medie total vanzari
    mediaTotal /= MAX_ORAS;
    printf("\nMedia vanzarilor din toate orasele: %.2f\n", mediaTotal);

    //eliberarea memoriei utilizand functia creata, cleanMemory
    for (int i = 0; i < MAX_ORAS; i++) {
        cleanMemory(&orase_tab[i]);
    }

}

void insertDataForCities(Oras *oras) {
    //alocare spatiu pentru vanzarile din toate birourile
    oras->vanzari_birou = (float *)malloc(MAX_BIROU * sizeof(float));

    //verificare daca oars e diferit de null
    if (oras->vanzari_birou == NULL) {
        printf("Eroare la alocarea memoriei.");
        exit(1);
    }

    //daca e dierit de null, citesc datele de la intrare
    printf("Introduceti vanzarile pentru oras:\n");
    for (int i = 0; i < MAX_BIROU; i++) {
        printf("Introduceti vanzarile pentru biroul %d: ", i + 1);
        scanf("%f", &oras->vanzari_birou[i]);
    }
}

//functie care calculeaza media tuturor vanzarilor din toate orasele
float totalSells(const Oras *oras) {
    float total = 0.0;
    for (int i = 0; i < MAX_BIROU; i++) {
        total += oras->vanzari_birou[i];
    }
    return total;
}

//functie care elibereaza zona de memorie alocata dinamic
void cleanMemory(Oras *oras) {
    //utilizand functia free, eliberez zona de memorie alocata anterior
    free(oras->vanzari_birou);
    oras->vanzari_birou = NULL;
}

/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti vanzarile pentru oras:
Introduceti vanzarile pentru biroul 1: 455
Introduceti vanzarile pentru biroul 2: 675
Introduceti vanzarile pentru biroul 3: 876
Introduceti vanzarile pentru biroul 4: 987
Introduceti vanzarile pentru biroul 5: 888
Introduceti vanzarile pentru oras:
Introduceti vanzarile pentru biroul 1: 1234
Introduceti vanzarile pentru biroul 2: 54
Introduceti vanzarile pentru biroul 3: 765
Introduceti vanzarile pentru biroul 4: 8887
Introduceti vanzarile pentru biroul 5: 876
Introduceti vanzarile pentru oras:
Introduceti vanzarile pentru biroul 1: 665
Introduceti vanzarile pentru biroul 2: 777
Introduceti vanzarile pentru biroul 3: 871
Introduceti vanzarile pentru biroul 4: 192
Introduceti vanzarile pentru biroul 5: 112
Total vanzari pentru orasul 1: 3881.00
Total vanzari pentru orasul 2: 11816.00
Total vanzari pentru orasul 3: 2617.00

Media vanzarilor din toate orasele: 6104.67

Process finished with exit code 0

 **/
