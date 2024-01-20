//Program care calculează durata unei călătorii de la Cluj la București cu trenul
#include <stdio.h>


int main() {
    int ora_plecare, minut_plecare;
    int ora_sosire, minut_sosire;
    int durata_ore, durata_minute;

    printf("Introduceti ora plecarii trenului din Cluj: \nora: ");
    scanf("%d", &ora_plecare);
    printf("minutul: ");
    scanf("%d", &minut_plecare);

    printf("Introduceti ora sosirii in Bucuresti: \nora: ");
    scanf("%d", &ora_sosire);
    printf("minutul: ");

    scanf("%d", &minut_sosire);

    if (ora_sosire > 23 || ora_plecare > 23 || minut_sosire > 59 || minut_plecare > 59) {
        printf("Orele introduse nu sunt valide. Incearca din nou.");
    } else {
        //adaug 24 de ore la ora sosirii daca e mai mica decat ora plecarii
        if (ora_sosire < ora_plecare) {
            ora_sosire += 24;
        }
        if (ora_sosire > ora_plecare) {
            durata_ore = ora_sosire - ora_plecare;
        } else {
            durata_ore = ora_plecare - ora_sosire;
        }

        if (minut_sosire > minut_plecare) {
            durata_minute = minut_sosire - minut_plecare;
        } else {
            durata_minute = minut_plecare - minut_sosire;
        }
        printf("Total calatorie: %d ore, %d minute", durata_ore, durata_minute);
    }


}


/**
/Users/hinganm/CLionProjects/PCL_Teme/library
Introduceti ora plecarii trenului din Cluj: 
ora: 23
minutul: 00
Introduceti ora sosirii in Bucuresti: 
ora: 01
minutul: 00
Total calatorie: 2 ore, 0 minute
Process finished with exit code 0
 * **/

