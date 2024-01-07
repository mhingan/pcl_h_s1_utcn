//Program care citeşte de la tastatură un şir de caractere, apoi elimină din şir
//caracterele care se repetă şi afişează în final şirul obţinut, folosind pointeri;
#include <stdio.h>
#include <string.h>


void verify_array(char *s);

int main() {
    char sir[100];

    printf("Introdu un sir de caractere: ");
    fgets(sir, sizeof(sir), stdin);

    verify_array(sir);

    printf("Sirul fara duplicate: %s\n", sir);

}


void verify_array(char *s) {
    //initalizaez variabila lungime cu lungimea lui s (utilizand functia strlen);
    int lungime = strlen(s);

    //utilizand doua for loop-uri verific sirul pentru duplicate
    for (int i = 0; i < lungime; i++) {
        for (int j = i + 1; j < lungime;) {
            if (s[i] == s[j]) {
                // Elimin j daca acesta este duplicat
                for (int k = j; k < lungime; k++) {
                    s[k] = s[k + 1];
                }
                lungime--;
                //daca j este diferit, trec la urmatorul element din tablou
            } else {
                j++;
            }
        }
    }
}





/**
/Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Introdu un sir de caractere: aabbcc
Sirul fara duplicate: abc


Process finished with exit code 0
 * **/
