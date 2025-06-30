#include <stdio.h>
#include <time.h>

/*
Controle de vendas da Padaria Padoca

Regras:
- Pao frances: R$ 0.25
- Broa: R$ 0.35
- Sistema executa enquanto o usuario desejar
- Exibe em tempo real:
    - Total por tipo de produto
    - Quantidade por tipo de produto
    - Total geral
- No fechamento:
    - Custo de producao = 75% do total
    - Lucro = 25% do total
    - Data e hora do encerramento
*/

int main() {
    int opcao;
    int qtd_pao = 0, qtd_broa = 0;
    float preco_pao = 0.25, preco_broa = 0.35;
    float total_pao = 0.0, total_broa = 0.0, total_geral = 0.0;

    do {
        printf("\n--- Menu Padaria Padoca ---\n");
        printf("1 - Registrar venda de pao\n");
        printf("2 - Registrar venda de broa\n");
        printf("3 - Fechar o caixa\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            int qtd;
            printf("Quantidade de paes vendidos: ");
            scanf("%d", &qtd);
            qtd_pao += qtd;
            total_pao += qtd * preco_pao;
        } else if (opcao == 2) {
            int qtd;
            printf("Quantidade de broas vendidas: ");
            scanf("%d", &qtd);
            qtd_broa += qtd;
            total_broa += qtd * preco_broa;
        } else if (opcao != 3) {
            printf("Opcao invalida. Tente novamente.\n");
        }

        // Apresentar vendas em tempo real
        if (opcao == 1 || opcao == 2) {
            total_geral = total_pao + total_broa;
            printf("\n--- Vendas em tempo real ---\n");
            printf("Total de paes vendidos: %d | Total: R$ %.2f\n", qtd_pao, total_pao);
            printf("Total de broas vendidas: %d | Total: R$ %.2f\n", qtd_broa, total_broa);
            printf("TOTAL GERAL: R$ %.2f\n", total_geral);
        }

    } while (opcao != 3);

    // Fechamento do caixa
    total_geral = total_pao + total_broa;
    float custo_producao = total_geral * 0.75;
    float lucro = total_geral * 0.25;

    printf("\n--- Fechamento de Caixa ---\n");
    printf("Quantidade de paes vendidos: %d\n", qtd_pao);
    printf("Quantidade de broas vendidas: %d\n", qtd_broa);
    printf("Total arrecadado: R$ %.2f\n", total_geral);
    printf("Custo de producao (75%%): R$ %.2f\n", custo_producao);
    printf("Lucro da padaria (25%%): R$ %.2f\n", lucro);

    // Exibir data e hora do encerramento
    time_t agora;
    time(&agora);
    printf("Data e hora do encerramento: %s", ctime(&agora));

    return 0;
}
