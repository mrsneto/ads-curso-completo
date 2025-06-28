#include <stdio.h>

/*
@author leo neto
Lê números enquanto forem pares. Para ao receber um ímpar.
Mostra a quantidade de números pares digitados.
*/

int main() {
    int num, contador = 0;

    printf("Digite números pares. Para parar, digite um número ímpar.\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &num);

        if (num % 2 != 0) {  
            break;
        }

        contador++;
    }

    printf("\nQuantidade de números pares digitados: %d\n", contador);

    return 0;
}
