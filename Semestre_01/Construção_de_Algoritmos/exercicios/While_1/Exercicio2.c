#include <stdio.h>

/*
@author leo neto
Recebe números até que seja digitado um número negativo.
Conta quantos números são divisíveis por 2 e 7 (por 14).
*/

int main() {
    int num;
    int contador = 0;

    printf("Digite números (número negativo para encerrar):\n");

    while (1) {
        printf("Número: ");
        scanf("%d", &num);

        if (num < 0) {
            break;
        }

        if (num % 14 == 0) {  // divisível por 2 e 7
            contador++;
        }
    }

    printf("\nQuantidade de números divisíveis por 2 e 7: %d\n", contador);

    return 0;
}
