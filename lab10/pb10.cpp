//VARIANTA 1
//Program care citeste de la tastatura doi parametri întregi şi alţi doi flotanţi. Si afiseaza suma si produsul lor.
#include <stdio.h>


int main() {
    int a, b;
    float c, d;

    printf("Introduceti valoarea lui a: ");
    scanf("%d", &a);

    printf("Introduceti valoarea lui b: ");
    scanf("%d", &b);

    printf("Introduceti valoarea lui c: ");
    scanf("%f", &c);

    printf("Introduceti valoarea lui d: ");
    scanf("%f", &d);

    int suma_int = a + b;
    int produs_int = a * b;

    float suma_float = c * d;
    float produs_float = c * d;

    float suma_totala = (float) a + (float) b + c + d;
    float produs_total = (float) a * (float) b * c * d;

    printf("\nSuma intregilor: %d", suma_int);
    printf("\nProdus intregi: %d", produs_int);

    printf("\nSuma flotanti: %.2f", suma_float);
    printf("\nProdus flotanti: %.2f", produs_float);

    printf("\nSuma totala a numerelor: %.2f", suma_totala);
    printf("\nProdusul total al numerelor este: %.2f", produs_total);


}


/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita -123 12
Introduceti valoarea lui a: 3
Introduceti valoarea lui b: 4
Introduceti valoarea lui c: 6.99
Introduceti valoarea lui d: 0.67

Suma intregilor: 7
Produs intregi: 12
Suma flotanti: 4.68
Produs flotanti: 4.68
Suma totala a numerelor: 14.66
Produsul total al numerelor este: 56.20
Process finished with exit code 0
 * **/


//VARIANTA 2: utilizand pointeri
//Program care citeste de la tastatura doi parametri întregi şi alţi doi flotanţi. Si afiseaza suma si produsul lor.
#include <stdio.h>


int main() {
    int a, b;
    float c, d;

    int *pt_a;
    int *pt_b;

    float *pt_c;
    float *pt_d;

    printf("Introduceti valoarea lui a: ");
    scanf("%d", &a);

    printf("Introduceti valoarea lui b: ");
    scanf("%d", &b);

    printf("Introduceti valoarea lui c: ");
    scanf("%f", &c);

    printf("Introduceti valoarea lui d: ");
    scanf("%f", &d);

    pt_a = &a;
    pt_b = &b;
    pt_c = &c;
    pt_d = &d;


    int suma_int = *pt_a + *pt_b;
    float suma_float = *pt_c + *pt_d;

    int produs_int = *pt_a * *pt_b;
    float produs_float = *pt_c * *pt_d;

    printf("\nSuma intregilor: %d", suma_int);
    printf("\nSuma flotantilor: %.2f", suma_float);

    printf("\nProdusul intregilor: %d", produs_int);
    printf("\nProdusul flotantilor: %.2f", produs_float);


}


/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita -123 12
Introduceti valoarea lui a: 3
Introduceti valoarea lui b: 4
Introduceti valoarea lui c: 0.89
Introduceti valoarea lui d: 7.88

Suma intregilor: 7
Suma flotantilor: 8.77
Produsul intregilor: 12
Produsul flotantilor: 7.01
Process finished with exit code 0
 * **/
