#include <stdio.h>

/*
@author leo neto
Mostra a tabuada de multiplicar para o número escolhido pelo usuário.
*/

int main() {
    int numero, i;

    printf("Digite o número para ver a tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada do %d:\n", numero);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
