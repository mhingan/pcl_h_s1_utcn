//Program care citeşte de la tastatură două şiruri de caractere şi afişează
//numărul de caractere prin care ele diferă (adică numărul de caractere care există în primul şi nu
//există în al doilea plus numărul de caractere care există în al doilea şi nu există în primul).

#include <stdio.h>
#include <string.h>

void verify_arrays(char *s1, char *s2);

int main() {
//definire tablouri str1, str2
    char str1[100];
    char str2[100];

//citre valori siruri de la tastatura
    printf("Introduceti primul sir de caractere: ");
    fgets(str1, sizeof(str1), stdin);

//citre valori siruri de la tastatura pt. sir 2
    printf("Introduceti al doilea sir de caractere: ");
    fgets(str2, sizeof(str2), stdin);

//utilizând funcția verify_arrays, verific cele 2 șiruri de caractere
    verify_arrays(str1, str2);

}

void verify_arrays(char *s1, char *s2) {
    int char_dif_1 = 0;
    int char_dif_2 = 0;

    int lungime_s1 = strlen(s1);
    int lungime_s2 = strlen(s2);

    // Verific val diferite în primul șir
    for (int i = 0; i < lungime_s1; i++) {
        if (strchr(s2, s1[i]) == NULL) {
            char_dif_1++;
        }
    }

    // Verific val diferite în al doilea șir
    for (int i = 0; i < lungime_s2; i++) {
        if (strchr(s1, s2[i]) == NULL) {
            char_dif_2++;
        }
    }

    printf("Numarul de caractere prin care cele doua siruri difera este: %d\n", char_dif_1 + char_dif_2);
}


/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti primul sir de caractere: aabbcc
Introduceti al doilea sir de caractere: bbccdd
Numarul de caractere prin care cele doua siruri difera este: 4

Process finished with exit code 0

 * **/
