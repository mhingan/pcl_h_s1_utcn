//Program in care este definit un enum de tip Culoare_Alba, in el se afla mai multe culori,
//initial sunt afisate valori anumitor culor, apoi a unor culori secundare. Fieacre are asocit un numar, in fucntie de pozitia din sir.
#include <stdio.h>

//declarare enumerare Lumina_Alba
enum Lumina_Alba {
    Rosu, Portocaliu, Galben, Verde, Albastru, Indigo, Violet
};

//declarare functie care combina culorile si afiseaza o culoare rezultat
enum Lumina_Alba combina(enum Lumina_Alba culoare1, enum Lumina_Alba culoare2);

int main() {

    //initalizarea variabilelor de tip lumina alba
    enum Lumina_Alba red = Rosu;
    enum Lumina_Alba green = Verde;
    enum Lumina_Alba blue = Albastru;

    //afisare valori initaile ale variabilelor de tip lumina
    printf("\nCuloarea 1: %u", red);
    printf("\nCuloarea 2: %u", green);
    printf("\nCuloarea 3: %u", blue);

    //generare culori secundare
    enum Lumina_Alba culoare_sec_1 = combina(red, green);
    enum Lumina_Alba culoare_sec_2 = combina(blue, red);

    //printez culorile rezultate din combinatii
    printf("\nnCuloare secundara 1 (red+green) = %u", culoare_sec_1);
    printf("\nCuloare secundara 2 (blue + red) = %u", culoare_sec_2);

}

//functie care returneaza un enum, verifica daca exista combinatiile de culori si returneaza o alta culoare rezultata, sau in caza ca nu exista, returneaza Red.
enum Lumina_Alba combina(enum Lumina_Alba culoare1, enum Lumina_Alba culoare2) {
    if (culoare1 == Rosu && culoare2 == Verde) {
        return Galben;
    }
    if (culoare1 == Albastru && culoare2 == Rosu) {
        return Violet;
    }

    //returnez culoarea rosu daca nu am gasit combinatii
    return Rosu;
}

/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita

Culoarea 1: 0
Culoarea 2: 3
Culoarea 3: 4
nCuloare secundara 1 (red+green) = 2
Culoare secundara 2 (blue + red) = 6
Process finished with exit code 0
 * **/
