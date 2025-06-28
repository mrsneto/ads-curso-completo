#include <stdio.h>

/*
@author leo neto
10) Escreva um algoritmo que receba a quantidade de quilowatts gasta por uma residência
    e calcule:

    a) O valor em reais pago por cada quilowatt;
    b) O valor final da conta;
    c) O valor com 10% de desconto;
    d) O valor com 15% de multa por atraso.
*/

int main() {
    float salario_minimo = 1212.00;
    float valor_100kWh = salario_minimo * 0.05;
    float valor_kWh = valor_100kWh / 100;

    float consumo_kWh;
    float valor_total, valor_desconto, valor_multa;

    printf("Digite o consumo de energia em kWh: ");
    scanf("%f", &consumo_kWh);

    valor_total = consumo_kWh * valor_kWh;
    valor_desconto = valor_total * 0.90;  
    valor_multa = valor_total * 1.15;     

    printf("\nValor de cada kWh: R$ %.4f\n", valor_kWh);
    printf("Valor total da conta: R$ %.2f\n", valor_total);
    printf("Valor com 10%% de desconto: R$ %.2f\n", valor_desconto);
    printf("Valor com 15%% de multa por atraso: R$ %.2f\n", valor_multa);

    return 0;
}
