#include <stdio.h>
#include <stdlib.h>

#define MAX 10

struct Curs_valutar {
    char data[MAX];
    float v1;
    float v2;

};

int verificare_date(struct Curs_valutar *cursValutar, int n);

void diferenta_absoluta(struct Curs_valutar *curs, int n);

void cmm_val(struct Curs_valutar *valuta, int n);

int main() {
    int nr;
    FILE *fp;
    char fisier[] = "money.txt";
    fp = fopen(fisier, "r");

    if (fp == NULL) {
        printf("Eroare la deschiderea fisierului.");
    }

    fscanf(fp, "%d", &nr);

    //alocare dinamic memorie pentru a date;
    struct Curs_valutar *curs = (struct Curs_valutar *) malloc(nr * sizeof(struct Curs_valutar));

    if (curs == NULL) {
        printf("Eroare la alocare memorie pentru dateValuta.");
    }

    //citire date din fisier
    for (int i = 0; i < nr; i++) {
        fscanf(fp, "%s" "%f" "%f", curs[i].data, &curs[i].v1, &curs[i].v2);
    }

    fclose(fp);

    verificare_date(curs, nr);
    diferenta_absoluta(curs, nr);
    cmm_val(curs, nr);

    free(curs);


}

int verificare_date(struct Curs_valutar *cursValutar, int n) {
    for (int i = 0; i < n; i++) {
        if (cursValutar[i].v1 < 0 || cursValutar[i].v2 < 0) {
            printf("Ratele de schimb trebuie sa fie valori pozitive.");
            //returnez eroare daca sunt mai mici decat 0
            return 1;
        } else {
            printf("\nNu exista rate de schimb negative.");
            break;
        }
    }
    return 0;
}

void diferenta_absoluta(struct Curs_valutar *curs, int n) {
    float val_abs1 = 0;
    float val_abs2 = 0;

    printf("\nDiferente de curs:");
    for (int i = 0; i < n; i++) {
        if (curs[i].v1 < curs[i].v2) {
            val_abs1 = curs[i].v2 - curs[i].v1;
            printf("\n%.2f", val_abs1);
        } else if (curs[i].v1 > curs[i].v2) {
            val_abs2 = curs[i].v1 - curs[i].v2;
            printf("\n%.2f", val_abs2);
        }
    }
}

void cmm_val(struct Curs_valutar *valuta, int n) {
    FILE *fp;
    char fisier[] = "money_output.txt";
    fp = fopen(fisier, "w");

    if (fp == NULL) {
        printf("Eroare la deschiderea fisierului.");
    }

    float v1 = valuta[0].v1;
    float v2 = valuta[0].v2;

    for (int i = 0; i < n; i++) {
        if (valuta[i].v1 < v1) {
            v1 = valuta[i].v1;
            fprintf(fp, "\nV1 - %s", valuta[i].data);
        }
        if (valuta[i].v2 < v2) {
            v2 = valuta[i].v2;
            // Resetați v2 la noua valoare minimă
            fprintf(fp, "\nV2 - %s", valuta[i].data);
        }
    }

    fclose(fp);
}
