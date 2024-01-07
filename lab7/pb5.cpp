//Program care citeste doua valori si rezolva ecuatia ax+b=0;
#include <stdio.h>

int main() {
    int a, b;
    double x;

    printf("Introduceti valoare lui a: ");
    scanf("%d", &a);

    printf("Introduceti valoare lui b: ");
    scanf("%d", &b);

    if (a == 0) {
        printf("Valoare lui a trebuie sa fie diferita de zero.\n");
    } else {
        x = (double)-b / a;
        printf("Rezultatul ecuatiei ax+b=0 este %.2f\n", x);
    }

    return 0;
}





/**
/Users/hinganm/CLionProjects/PCL_Teme/library
Introduceti valoare lui a: 4
Introduceti valoare lui b: 2
Rezultatul ecuatiei ax+b=0 este -0.50

Process finished with exit code 0
 * **/

