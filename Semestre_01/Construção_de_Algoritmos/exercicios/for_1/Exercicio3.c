#include <stdio.h>

/*
@author leo neto
Este programa gera uma tabela de conversão de polegadas para centímetros.
1 polegada = 2.54 cm
*/

int main() {
    int max_polegadas, i;
    const float FATOR_CONVERSAO = 2.54;

    printf("Digite o valor máximo em polegadas: ");
    scanf("%d", &max_polegadas);

    printf("\nTabela de Conversão: Polegadas → Centímetros\n");
    printf("--------------------------------------------\n");
    printf("Polegadas\tCentímetros\n");

    for (i = 1; i <= max_polegadas; i++) {
        printf("%d\t\t%.2f\n", i, i * FATOR_CONVERSAO);
    }

    return 0;
}
