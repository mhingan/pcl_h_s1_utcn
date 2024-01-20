/*Calculare polinom de gradul 3*/
#include <stdio.h>

int main() {
    double a;
    double b;
    double c;
    double d;
    double x;

    //Citesc toti coeficientii de la tastatura
    printf("Calculare Poligom grad 3:\nValoarea lui a: ");
    scanf("%lf", &a);
    printf("Valoarea lui b: ");
    scanf("%lf", &b);
    printf("Valoarea lui c: ");
    scanf("%lf", &c);
    printf("Valoarea lui d: ");
    scanf("%lf", &d);
    printf("Valoarea coefixientului pentru care doresti sa afli polinomul (x): ");
    scanf("%lf", &x);

    //Calculez valoare polinomului dupa formula: a*x^3 + b*x^2 + c*x + d;
    double rez_polinom = a * x * x * x + b * x * x + c * x + d;

    printf("Valoare polinomuului penttru x = %.2f este %lf", x, rez_polinom);


}

/** /Users/hinganm/CLionProjects/lab4_tema/cmake-build-debug/lab4_tema
Calculare Poligom grad 3:
Valoarea lui a: 5
Valoarea lui b: 1.2
Valoarea lui c: 5.9
Valoarea lui d: 4.87
Valoarea coefixientului pentru care doresti sa afli polinomul (x): 3
Valoare polinomuului penttru x = 3.00 este 168.370000
Process finished with exit code 0
*/


