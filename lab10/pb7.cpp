//Program care preia mai multe siruri de caractere din linia de comanad si le concateneaza
#include <stdio.h>
#include <strings.h>


//parametrii de linie de comanda pentru a putea prelua sirurile din linia de comanda
int main(int argc, char *argv[]) {
    //initializez un tablou care o sa aiba rol de rezultat
    char rezultat[100] = "";

    // utilizand "strcat" contenez sirurile de caractere
    for (int i = 1; i < argc; i++) {
        strcat(rezultat, argv[i]);
    }

    printf("Rezultatul concatenarii: %s\n", rezultat);

}





/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita fghjwd dfhje
Rezultatul concatenarii: fghjwddfhje

Process finished with exit code 0

 * **/
