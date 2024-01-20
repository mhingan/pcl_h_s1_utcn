//Program care citeste numele si notele a doi studenti, apoi calculeaza media si afiseaza studentii la o dimneiune de 20 dreapta.
#include <stdio.h>

int main() {
    char student1[50];
    char student2[50];
    double s1_lab, s1_teoretic, s1_practic;
    double s2_lab, s2_teoretic, s2_practic;

    printf("Introduceti numele primului student: ");
    scanf("%s", student1);

    printf("Nota laborator: ");
    scanf("%lf", &s1_lab);

    printf("Nota teorie: ");
    scanf("%lf", &s1_teoretic);

    printf("Nota practic: ");
    scanf("%lf", &s1_practic);

    printf("Introduceti numele celui de-al doilea student: ");
    scanf("%s", student2);

    printf("Nota laborator: ");
    scanf("%lf", &s2_lab);

    printf("Nota teorie: ");
    scanf("%lf", &s2_teoretic);

    printf("Nota practic: ");
    scanf("%lf", &s2_practic);

    double media_s1 = (s1_lab + s1_teoretic + s1_practic) / 3;
    double media_s2 = (s2_lab + s2_teoretic + s2_practic) / 3;

    //utilizand un specificator de latime, afisez la o dimensiune de 20 (%Ns)
    printf("\n%20s | %s Media: %.2f", student1, media_s1);
    printf("\n%20s | %s Media: %.2f", student2, media_s2);


}





/**
/Users/hinganm/CLionProjects/PCL_Teme/library
Introduceti numele primului student: Ana
Nota laborator: 7.50
Nota teorie: 7
Nota practic: 8.90
Introduceti numele celui de-al doilea student: Mihaita
Nota laborator: 9.00
Nota teorie: 9.80
Nota practic: 8.90

                 Ana |  Media: 7.80
             Mihaita |  Media: 9.23

Process finished with exit code
 * **/

