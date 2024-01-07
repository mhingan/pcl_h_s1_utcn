//Program care citeste raza cerului si calculeaza aria si lungimea acestuia, unde PI este o variabila simbolica;
#include <stdio.h>
#include <math.h>

//definire constanta simbolica
#define PI 3.14

int main() {
    int raza;
    double aria, lungime;

    printf("Introduceti raza cercului:");
    scanf("%d", &raza);

    lungime = 2 * PI * raza;
    aria = PI * pow(raza, 2);

    //afisare in camp de dimensiunea 10 (utilizand %10.2f, unde 10 e dimensiunea de afisare)
    printf("Lungime: %10.2f, Arie: %10.2f", lungime, aria);
    
}


/**
/Users/hinganm/CLionProjects/PCL_Teme/library
Introduceti raza cercului:8
Lungime:      50.24, Arie:     200.96
Process finished with exit code 0

 * **/

