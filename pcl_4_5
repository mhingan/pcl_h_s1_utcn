/*Utilizatorul introduce un o fraza in care sune ce varsta are, programul returneaza varsta sub forma de int*/
#include <iostream>

int main() {
    //Creez o variabila int si un sir de caracter numit "user_input"
    int ani;
    char user_input[50];
    printf("Introdu varsta sub forma: \"Eu am X ani.\" ");

    //citesc textul introdus la tastatura
    fgets(user_input, sizeof(user_input), stdin);

    //Daca textul corespunde formatului de mai sus, returnez variabila sub forma de int, altfel returnez o eroare.
    if (sscanf(user_input, "Eu am %d ani.", &ani) >= 1) {
        printf("%d", ani);
    } else {
        printf("Textul introdus nu corespunde cerintei de mai sus. Incearca din nou.");
    }

}

/**
 *
/Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Introdu varsta sub forma: "Eu am X ani." Eu am 21 de ani.
21
Process finished with exit code 0
**/
