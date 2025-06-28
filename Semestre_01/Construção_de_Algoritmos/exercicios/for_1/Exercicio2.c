#include <stdio.h>

/*
@author leo neto
Imprime todos os números de 100 até 1 em ordem decrescente.
*/

int main() {
    int i;

    printf("Números de 100 até 1 (ordem decrescente):\n");

    for (i = 100; i >= 1; i--) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}
