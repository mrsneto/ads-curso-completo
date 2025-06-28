#include <stdio.h>

/*
@author leo neto
12) O metro quadrado de um terreno custa, em média, R$ 5.000 na cidade de Corumbá.
    Escreva um algoritmo que leia as dimensões do terreno (comprimento e largura),
    calcule a área e exiba:

    a) A dimensão total do terreno (em m²);
    b) O preço médio com base no valor do m².
*/

int main() {
    float comprimento, largura, area, preco_m2 = 5000.0, preco_total;

    printf("Digite o comprimento do terreno (em metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura do terreno (em metros): ");
    scanf("%f", &largura);

    area = comprimento * largura;
    preco_total = area * preco_m2;

    printf("\nÁrea do terreno: %.2f m²\n", area);
    printf("Preço médio do terreno: R$ %.2f\n", preco_total);

    return 0;
}
