//Program care genereaza un numr intre 1 si 100. Apoi afiseaza un mesaj in functie de numarul introdus de utilizator in incercarea de a ghici numarul.
#include <stdio.h>
#include <stdlib.h>


int main() {
    //definesc tabloul de pointeri denumit "tab" catre sirul de caractere
    char *tab[] = {"valoare prea mica\n", "valoare prea mare\n", "valoare corecta\n"};

    //definesc o variabila "nr_incercari" care are rol de numarator, numara incercarile pana la ghicirea numarului
    int nr_incercari = 0;

    //generez un numar aleatoriul folosind functia "rand"
    //variabila nr o sa fie egala cu numarul random generat
    int nr = rand() % 100;

    //variabila care stocheaza valoare citita de la tastatura
    int nr_user;

    //utilizand un "do - while" si 2 "if" afisez un mesaj pana cand utilizatorul ghiceste valoare
    do {
        nr_incercari++;

        printf("\nIntroduceti un numar: ");
        scanf("%d", &nr_user);

        if (nr_user < nr) {
            printf("%s", tab[0]);
        } else if (nr_user > nr) {
            printf("%s", tab[1]);
        } else {
            printf("%s", tab[2]);
        }
    } while (nr_user != nr);

    printf("\n\tValoare generata aleatoriu: %d", nr);
    printf("\n\tNumar de incercari: %d", nr_incercari);

}


/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita -123 12
Introduceti un numar: 6
valoare prea mica

Introduceti un numar: 7
valoare prea mica

Introduceti un numar: 0
valoare prea mica

Introduceti un numar: 8
valoare corecta

	Valoare generata aleatoriu: 8
	Numar de incercari: 4
Process finished with exit code 0
 * **/
