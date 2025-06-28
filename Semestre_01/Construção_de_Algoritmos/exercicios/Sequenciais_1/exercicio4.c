#include <stdio.h>
#include <math.h>

/*
@author leo neto
4) Escreva um algoritmo que receba um número real e imprima o “número”, o “quadrado”
   e a “raiz quadrada” desse número.
*/

int main() {
    float num, quadrado, raiz;

    printf("Digite um número real: ");
    scanf("%f", &num);

    quadrado = num * num;
    raiz = sqrt(num); 

    printf("Número = %.2f\n", num);
    printf("Quadrado = %.2f\n", quadrado);
    printf("Raiz quadrada = %.2f\n", raiz);

    return 0;
}
