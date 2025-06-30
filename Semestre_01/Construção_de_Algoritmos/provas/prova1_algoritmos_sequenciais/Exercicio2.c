#include <stdio.h>

/*
@author leo neto
Calcula o valor cobrado para limpar um terreno com base em suas dimensões.
O valor base é R$ 22.50 por metro quadrado + 10% de imposto sobre o valor total.
*/

int main() {
    float largura, comprimento;
    float area, valor_base, imposto, valor_total;
    float preco_m2 = 22.50;

    // Entrada de dados
    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    // Cálculos
    area = largura * comprimento;
    valor_base = area * preco_m2;
    imposto = 0.10 * valor_base;
    valor_total = valor_base + imposto;

    // Saída
    printf("\n=== Detalhamento da Limpeza ===\n");
    printf("Área total do terreno: %.2f m²\n", area);
    printf("Valor base da limpeza: R$ %.2f\n", valor_base);
    printf("Imposto (10%%): R$ %.2f\n", imposto);
    printf("Valor total a ser cobrado: R$ %.2f\n", valor_total);

    return 0;
}
