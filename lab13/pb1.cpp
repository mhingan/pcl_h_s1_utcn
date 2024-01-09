//Program care verifica dimensiunea unuei reuniuni si ale campurilor acestei reuniuni
#include <stdio.h>

//declarare reuniune de tip Grup
union Grup{
    int int_number;
    long long_number;
    double double_number;
    char character;
};


int main () {
    //declarare unuion grup in functia mai pentru a putea avea acces la membrii acestia
    union Grup grup;
    
    //printez fiecare camp pentru a vedea care poate fi afisat
    printf("Campuri care pot fi afisate:\nint - %d\nlong - %ld\ndouble - %.2f\nchar - %c", grup.int_number, grup.long_number, grup.double_number, grup.character);

    //printez dimeniunea reuniunii si a memrbrilor acesteia
    printf("\nSize of Grup = %lu", sizeof (grup));
    printf("\nSize of one variable of type Grup - int = %lu", sizeof (grup.int_number));
    printf("\nSize of one variable of type Grup - long = %lu", sizeof (grup.long_number));
    printf("\nSize of one variable of type Grup - double = %lu", sizeof (grup.double_number));
    printf("\nSize of one variable of type Grup - char = %lu", sizeof (grup.character));
}

/**
 /Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Campuri care pot fi afisate:
int - 137370576
long - 4432337872
double - 0.00
char - ?
Size of Grup = 8
Size of one variable of type Grup - int = 4
Size of one variable of type Grup - long = 8
Size of one variable of type Grup - double = 8
Size of one variable of type Grup - char = 1
Process finished with exit code 0
 * **/
