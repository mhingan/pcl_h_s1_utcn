//Program care citeste de la tastatura un sir de caractere (parola). Programul citeste repetat de la tastatura pana cand utilizatorul introduce valoare corecta,
//afiseaza si numarul de incercari.
#include <stdio.h>
#include <string.h>

int main() {
    char parola[30];
    char parola2[30];

    printf("Introduceti noua dumneavoastra parola: ");
    scanf("%s", parola);

    while (1) {
        printf("Pentru a continua, va rugam sa tastati parola introdusa mai sus: ");
        scanf("%s", parola2);

        //compar cele doua stringuri utilizand "strcmp" din biblioteca string.h
        int comparatie = strcmp(parola, parola2);

        if (comparatie == 0) {
            printf("Parola este corecta.");
            break;
        }
    }

}



/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introduceti noua dumneavoastra parola: mihai
Pentru a continua, va rugam sa tastati parola introdusa mai sus: ana
Pentru a continua, va rugam sa tastati parola introdusa mai sus: are
Pentru a continua, va rugam sa tastati parola introdusa mai sus: mere
Pentru a continua, va rugam sa tastati parola introdusa mai sus: mihai
Parola este corecta.
Process finished with exit code 0

 * **/
