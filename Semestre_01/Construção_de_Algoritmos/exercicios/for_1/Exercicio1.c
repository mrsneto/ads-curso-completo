#include <stdio.h>

/*
@author leo neto
Imprime todos os números pares no intervalo de 1 até 10.
*/

int main() {
    int i;

    printf("Números pares de 1 até 10:\n");

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}
