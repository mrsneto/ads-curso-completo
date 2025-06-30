#include <stdio.h>

/*
@author leo neto
Divide moedas entre marinheiros e o capitão, calcula manutenção do navio e saldo.
*/

int main() {
    int moedas_totais, marinheiros;
    int moedas_marinheiro, moedas_capitao;
    int total_divisores, custo_manutencao = 120;
    int saldo_capitao;

 
    printf("Digite o numero total de moedas: \n ");
    scanf("%d", &moedas_totais);

    printf("Digite o numero de marinheiros: \n");
    scanf("%d", &marinheiros);


    total_divisores = marinheiros + 2;

    if (moedas_totais % total_divisores != 0) {
        printf("Erro: as moedas nao podem ser divididas por zero.\n");
        return 1;
    }


    moedas_marinheiro = moedas_totais / total_divisores;
    moedas_capitao = 2 * moedas_marinheiro;


    printf("Cada marinheiro recebe: %d moedas\n", moedas_marinheiro);
    printf("O capitao recebe: %d moedas\n", moedas_capitao);


    if (moedas_capitao >= custo_manutencao) {
        saldo_capitao = moedas_capitao - custo_manutencao;
        printf("eh possível realizar a manutencao do navio.\n");
        printf("Saldo restante do capitao apos a manutencao: %d moedas\n", saldo_capitao);
    } else {
        printf("Nao eh possível realizar a manutencao do navio.\n");
    }

    return 0;
}
