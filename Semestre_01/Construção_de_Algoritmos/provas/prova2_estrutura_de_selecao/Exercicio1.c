#include <stdio.h>

/*
@author leo neto
Dado a idade de dona Mônica e de dois filhos,
calcula a idade do terceiro filho e exibe a idade do mais velho entre os três.
*/

int main() {
    int M, A, B, C, mais_velho;

    // Entrada
    printf("Digite a idade de dona Monica: ");
    scanf("%d", &M);

    printf("Digite a idade do primeiro filho: ");
    scanf("%d", &A);

    printf("Digite a idade do segundo filho: ");
    scanf("%d", &B);

    // Calcula a idade do terceiro filho
    C = M - (A + B);

    // Verifica o maior
    mais_velho = A;
    if (B > mais_velho) {
        mais_velho = B;
    }
    if (C > mais_velho) {
        mais_velho = C;
    }

    // Saída
    printf("A idade do filho mais velho é: %d\n", mais_velho);

    return 0;
}
