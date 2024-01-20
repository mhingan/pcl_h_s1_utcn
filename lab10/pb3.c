//Aplicaţie care citeşte de la tastatură un şir de caractere cu lungimea mai mare decât 7.
//Folosind un pointer pt. a accesa şi afişa caracterele de pe poziţiile 1, 3, 5 şi 7.

#define MAX_SIZE 20

#include <stdio.h>
#include <string.h>

int main() {
    //definesc un tablou si o variabila de tip pointer
    char text[MAX_SIZE];
    char *ptr;

    //citesc de la tastatura un sir de caractere
    printf("Introduceti un sir de caractere cu lungimea mai mare de 7: ");
    fgets(text, sizeof(text), stdin);

    ptr = text;

    //verific daca sirul are lungimea mai mare sau egala cu 7, cu ajutorul functiei "strlen".
    int size = strlen(ptr);

    if (size < 7) {
        printf("Sirul trebuie sa contina minim 7 elemente.");
    } else {
        //printez sirul initial
        printf("\nSirul de caractere introdus initial: %s", ptr);

        //Utilizez "*(ptr + 2)" in loc de "*ptr + 2" deoarece utilizand a doua varaianta rezulattaul va fi urmatorul + 2 dupa ptr (ptr = h; ptr + 2 = j)
        printf("\nCaracterele introduse in functie de pozitia lor: "
               "\n- pozitia 1 = %c \n- pozitia 3 = %c \n- pozitia 5 = %c \n- pozitia 7 = %c\n", *ptr, *(ptr + 2),
               *(ptr + 4),
               *(ptr + 6));

    }
}







/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita -123 12
Introduceti un sir de caractere cu lungimea mai mare de 7: Mihait a

Sirul de caractere introdus initial: Mihaita

Caracterele introduse in functie de pozitia lor: 
- pozitia 1 = M 
- pozitia 3 = h 
- pozitia 5 = i 
- pozitia 7 = a

Process finished with exit code 0
 * **/

