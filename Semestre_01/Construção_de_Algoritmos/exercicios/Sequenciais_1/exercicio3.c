#include <stdio.h>

/*
@author leo neto
3) Escreva um algoritmo que leia 4 variáveis reais e imprima a média ponderada entre os valores,
   sabendo-se que os pesos são respectivamente 1, 2, 3 e 4.
*/

int main() {
    float n1, n2, n3, n4;
    float media;

    printf("Digite o primeiro valor (peso 1): ");
    scanf("%f", &n1);

    printf("Digite o segundo valor (peso 2): ");
    scanf("%f", &n2);

    printf("Digite o terceiro valor (peso 3): ");
    scanf("%f", &n3);

    printf("Digite o quarto valor (peso 4): ");
    scanf("%f", &n4);

    media = (n1*1 + n2*2 + n3*3 + n4*4) / (1 + 2 + 3 + 4);

    printf("Media ponderada = %.2f\n", media);

    return 0;
}
