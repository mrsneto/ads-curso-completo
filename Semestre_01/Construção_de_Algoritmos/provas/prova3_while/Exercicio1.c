#include <stdio.h>

/*
Exercicio: Arrecadacao de multas de transito - DETRAN

O DETRAN deseja saber o total de recursos que foram arrecadados com a aplicacao de multas de transito no ano de 2021.

O algoritmo deve ler as seguintes informacoes para cada motorista:

a) Numero da carteira de habilitacao (CNH) com valores de 1 a 4327;
b) Numero de multas de cada motorista;
c) Valor de cada multa;

Regras:
- Deve ser calculado e apresentado o valor total da divida para cada motorista;
- Tambem deve ser calculado o total de recursos arrecadados (somatorio de todas as multas) pelo DETRAN;
- Imprimir tambem o numero da carteira do motorista que obteve o maior numero de multas;
- Contar a quantidade de motoristas sem nenhum registro de multa;

O algoritmo deve ser encerrado quando o numero da CNH informado for igual a 0.

Entrada:
- Numeros inteiros positivos para CNH e quantidade de multas
- Valores reais para o valor de cada multa

Saida:
- Total da divida individual
- Total geral arrecadado
- CNH com maior numero de multas
- Quantidade de motoristas sem multa
*/

int main() {
    int cnh, num_multas;
    float valor_multa, total_motorista, total_geral = 0;
    int maior_multas = 0, cnh_maior_multas = 0;
    int motoristas_sem_multas = 0;

    while (1) {
        printf("\nDigite o numero da CNH (0 para encerrar): ");
        scanf("%d", &cnh);

        if (cnh == 0) {
            break;
        }

        if (cnh < 1 || cnh > 4327) {
            printf("CNH invalida. Digite um numero entre 1 e 4327.\n");
            continue;
        }

        printf("Digite o numero de multas do motorista: ");
        scanf("%d", &num_multas);

        total_motorista = 0;

        for (int i = 1; i <= num_multas; i++) {
            printf("  Valor da multa %d: R$ ", i);
            scanf("%f", &valor_multa);
            total_motorista += valor_multa;
        }

        if (num_multas == 0) {
            motoristas_sem_multas++;
        }

        if (num_multas > maior_multas) {
            maior_multas = num_multas;
            cnh_maior_multas = cnh;
        }

        printf("Total de divida do motorista com CNH %d: R$ %.2f\n", cnh, total_motorista);
        total_geral += total_motorista;
    }

    printf("\n=== RELATORIO FINAL DO DETRAN ===\n");
    printf("Total arrecadado em multas: R$ %.2f\n", total_geral);
    if (maior_multas > 0) {
        printf("Motorista com mais multas: CNH %d com %d multas\n", cnh_maior_multas, maior_multas);
    }
    printf("Total de motoristas sem nenhuma multa: %d\n", motoristas_sem_multas);

    return 0;
}
