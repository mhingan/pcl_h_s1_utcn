//Program care citeste de la tastatura un sir de caractere, apoi il returneaza inversat
#include <stdio.h>
#include <string.h>

//utilizez ca parametrii de intrare
//argc(argument count) - numarul total de elemente primite din linia de comanda
//argv[](argument value) - contine elemnetele primite din linia de comanda


int main(int argc, char *argv[]) {

    //definesc un pointer catre primul element din argv
    char *ptr = argv[1];

    //definesc o variabila int si stochez in ea lungimea lui ptr
    int length = strlen(ptr);

    //printez sirul initial
    printf("Sir initial: %s\n", ptr);


    //utilizand un for parcurg sirul pana la jumatatea acestuia (asigura ca fiecare caracter este schimbat cu cel corespunzator din partea opusa a sirului)
    for (int i = 0; i < length / 2; i++) {
        //salvez elementul curent intro-o variabila temporara numita "var"
        char var = ptr[i];
        //schimb caracterul de pe pozitia curent, cu cel din partea opusa a sirului
        ptr[i] = ptr[length - i - 1];
        //schimba caracterul salvat temporar în pozitia opusa de la pasul anterior
        ptr[length - i - 1] = var;
    }

    printf("Sir inversat: %s\n", ptr);

}




/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita MihaitaHingan
Sir initial: MihaitaHingan
Sir inversat: nagniHatiahiM

Process finished with exit code 0
 * **/
