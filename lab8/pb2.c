//Program care determina cel mai mic numar dintr-un tablou unidimensional.
#include <stdio.h>

int main() {
    int cmmn = 0;

    int tab[] = {1,4,-5, 7,66,-34,-6,8,9,3,1,0,-2};

    for(int i=0; i<=13-1; i++){
        if(tab[i]<cmmn){
            cmmn = tab[i];
        }
    }
    printf("Cel mai mic numar din tabloul introdus este: %d", cmmn);

}




/**
 /Users/hinganm/CLionProjects/pcl-homework-hingan_mihaita/cmake-build-debug/pcl_homework_hingan_mihaita
Cel mai mic numar din tabloul introdus este: -34
Process finished with exit code 0
 * **/
