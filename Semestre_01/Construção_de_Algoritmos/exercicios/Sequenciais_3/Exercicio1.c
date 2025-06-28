#include <stdio.h>

/*
@author leo neto
11) Escreva um algoritmo que receba o valor da compra em dólar e:

    a) Converta para reais (R$);
    b) Calcule a alíquota de 60%;
    c) Calcule a alíquota com taxa atualizada de 30%.
*/

int main() {
    float valor_dolar, valor_real;
    float aliquota_60, aliquota_30;
    float cotacao_dolar = 5.31;

    printf("Digite o valor da compra em dólar: US$ ");
    scanf("%f", &valor_dolar);

    valor_real = valor_dolar * cotacao_dolar;
    aliquota_60 = valor_real * 0.60;
    aliquota_30 = valor_real * 0.30;

    printf("\nValor da compra em reais: R$ %.2f\n", valor_real);
    printf("Taxa de 60%% (alíquota): R$ %.2f\n", aliquota_60);
    printf("Taxa de 30%% (nova alíquota): R$ %.2f\n", aliquota_30);

    return 0;
}
