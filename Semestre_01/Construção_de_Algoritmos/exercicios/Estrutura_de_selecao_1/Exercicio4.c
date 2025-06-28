#include <stdio.h>

/*
@author leo neto
Este programa converte uma quantia em reais para:

1 - Franco suíço     (R$ 2,75)
2 - Libra esterlina  (R$ 3,15)
3 - Dólar americano  (R$ 3,85)
4 - Marco alemão     (R$ 1,95)
*/

int main() {
    float reais, resultado;
    int opcao;
    float cotacao;

    printf("Digite o valor em reais que deseja converter: R$ ");
    scanf("%f", &reais);

    printf("\nEscolha a moeda de destino:\n");
    printf("1 - Franco suíço (R$ 2,75)\n");
    printf("2 - Libra esterlina (R$ 3,15)\n");
    printf("3 - Dólar americano (R$ 3,85)\n");
    printf("4 - Marco alemão (R$ 1,95)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            cotacao = 2.75;
            printf("Convertendo para Franco suíço...\n");
            break;
        case 2:
            cotacao = 3.15;
            printf("Convertendo para Libra esterlina...\n");
            break;
        case 3:
            cotacao = 3.85;
            printf("Convertendo para Dólar americano...\n");
            break;
        case 4:
            cotacao = 1.95;
            printf("Convertendo para Marco alemão...\n");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    resultado = reais / cotacao;
    printf("Valor convertido: %.2f\n", resultado);

    return 0;
}
