#include <stdio.h>
#include <math.h>

/*
@author leo neto
6) Escreva um algoritmo que receba a razão de uma PG (progressão geométrica)
   e o valor do seu primeiro termo, e imprima o sétimo termo da série.
*/

int main() {
    float a1, razao, a7;

    printf("Digite o primeiro termo da PG: ");
    scanf("%f", &a1);

    printf("Digite a razão da PG: ");
    scanf("%f", &razao);

    a7 = a1 * pow(razao, 6);  

    printf("O sétimo termo da PG é: %.2f\n", a7);

    return 0;
}
