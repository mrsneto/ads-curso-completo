#include <stdio.h>

/*
@author leo neto
9) Escreva um algoritmo que receba duas variáveis inteiras A e B
   e efetue a troca dos valores. Ao final, apresente os valores trocados.
*/

int main() {
    int A, B, temp;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

  
    temp = A;
    A = B;
    B = temp;

    printf("\nValores trocados:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
