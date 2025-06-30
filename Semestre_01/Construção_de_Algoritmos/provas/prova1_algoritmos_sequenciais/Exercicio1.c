#include <stdio.h>

/*
@author leo neto
A Padaria Padoca vende pães e broas diariamente. 
Cada pão custa R$ 0.25 e cada broa custa R$ 0.35. 
No final do dia, calcula-se o total arrecadado, o custo de produção (45%), 
o valor a ser guardado na poupança (30%) e o lucro (25%).
*/

int main()
{
    double valor_pao = 0.25, valor_broa = 0.35;
    int qnt_pao_vendido, qnt_broa_vendida;
    double total_venda;
    double custoProducao, poupanca_empresa, lucro_obtido;

    printf("Digite a quantidade de pães vendidos: ");
    scanf("%d", &qnt_pao_vendido);

    printf("Digite a quantidade de broas vendidas: ");
    scanf("%d", &qnt_broa_vendida);

    // Cálculos
    total_venda = (qnt_pao_vendido * valor_pao) + (qnt_broa_vendida * valor_broa);
    custoProducao = 0.45 * total_venda;
    poupanca_empresa = 0.30 * total_venda;
    lucro_obtido = 0.25 * total_venda;

    // Exibição dos resultados
    printf("\n=== Relatório Diário de Vendas ===\n");
    printf("Quantidade de pães vendidos: %d\n", qnt_pao_vendido);
    printf("Quantidade de broas vendidas: %d\n", qnt_broa_vendida);
    printf("Total arrecadado: R$ %.2f\n", total_venda);

    printf("\n=== Destinação do Valor Arrecadado ===\n");
    printf("Custo de produção (45%%): R$ %.2f\n", custoProducao);
    printf("Valor destinado à poupança (30%%): R$ %.2f\n", poupanca_empresa);
    printf("Lucro líquido (25%%): R$ %.2f\n", lucro_obtido);

    return 0;
}
