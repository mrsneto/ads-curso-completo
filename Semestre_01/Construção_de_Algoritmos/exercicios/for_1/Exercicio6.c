#include <stdio.h>

/*
@author leo neto
Lê uma quantidade de números definida pelo usuário,
e informa o maior e o menor número digitado.
*/

int main() {
    int n, i;
    float num, maior, menor;

    printf("Quantos números você deseja digitar? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    printf("Digite o número 1: ");
    scanf("%f", &num);
    maior = num;
    menor = num;

    for (i = 2; i <= n; i++) {
        printf("Digite o número %d: ", i);
        scanf("%f", &num);

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }

    printf("\nMaior número digitado: %.2f\n", maior);
    printf("Menor número digitado: %.2f\n", menor);

    return 0;
}
