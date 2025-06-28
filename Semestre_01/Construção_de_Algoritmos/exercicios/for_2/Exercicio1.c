#include <stdio.h>

/*
@author leo neto
Calcula imposto de renda de 5 pessoas conforme a tabela:
- Salário < 600       → Isento
- 600 <= Salário <1500 → 10%
- Salário >= 1500      → 15%
Imprime desconto individual e total arrecadado.
*/

int main() {
    float salario, desconto, total_arrecadado = 0.0;
    int i;

    for (i = 1; i <= 5; i++) {
        printf("Digite o salário bruto da pessoa %d: R$ ", i);
        scanf("%f", &salario);

        if (salario < 600.0) {
            desconto = 0.0;
            printf("Pessoa %d: Isento de imposto.\n", i);
        } else if (salario < 1500.0) {
            desconto = salario * 0.10;
            printf("Pessoa %d: Desconto de 10%% = R$ %.2f\n", i, desconto);
        } else {
            desconto = salario * 0.15;
            printf("Pessoa %d: Desconto de 15%% = R$ %.2f\n", i, desconto);
        }

        total_arrecadado += desconto;
    }

    printf("\nTotal arrecadado pela receita federal: R$ %.2f\n", total_arrecadado);

    return 0;
}
