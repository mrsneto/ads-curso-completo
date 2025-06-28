#include <stdio.h>

/*
@author leo neto
Este programa calcula o desconto do INSS conforme a tabela:

- Até R$ 600,00      → Isento
- R$ 600,01 a 1200   → 20%
- R$ 1200,01 a 2000  → 25%
- Acima de R$ 2000   → 30%
*/

int main() {
    float salario, desconto = 0.0;
    float percentual = 0.0;

    printf("Digite o salário: R$ ");
    scanf("%f", &salario);

    if (salario <= 600.0) {
        printf("\nIsento de desconto do INSS.\n");
    } else if (salario <= 1200.0) {
        percentual = 0.20;
    } else if (salario <= 2000.0) {
        percentual = 0.25;
    } else {
        percentual = 0.30;
    }

    if (percentual > 0) {
        desconto = salario * percentual;
        printf("\nDesconto de INSS aplicado: %.0f%%\n", percentual * 100);
        printf("Valor do desconto: R$ %.2f\n", desconto);
        printf("Salário com desconto: R$ %.2f\n", salario - desconto);
    }

    return 0;
}
