#include <stdio.h>

/*
@author leo neto
Recebe idade e peso de 10 pessoas e calcula a média de peso por faixa etária.
*/

int main() {
    int idade, i;
    float peso;

    float soma_peso_1_10 = 0, soma_peso_11_20 = 0, soma_peso_21_30 = 0, soma_peso_mais_30 = 0;
    int count_1_10 = 0, count_11_20 = 0, count_21_30 = 0, count_mais_30 = 0;

    for (i = 1; i <= 10; i++) {
        printf("Pessoa %d\n", i);
        printf("Digite a idade: ");
        scanf("%d", &idade);

        printf("Digite o peso (kg): ");
        scanf("%f", &peso);

        if (idade >= 1 && idade <= 10) {
            soma_peso_1_10 += peso;
            count_1_10++;
        } else if (idade >= 11 && idade <= 20) {
            soma_peso_11_20 += peso;
            count_11_20++;
        } else if (idade >= 21 && idade <= 30) {
            soma_peso_21_30 += peso;
            count_21_30++;
        } else if (idade > 30) {
            soma_peso_mais_30 += peso;
            count_mais_30++;
        } else {
            printf("Idade inválida para este cálculo. Ignorando.\n");
        }
        printf("\n");
    }

    printf("Médias de peso por faixa etária:\n");

    if (count_1_10 > 0)
        printf("1 a 10 anos: %.2f kg\n", soma_peso_1_10 / count_1_10);
    else
        printf("1 a 10 anos: Sem dados.\n");

    if (count_11_20 > 0)
        printf("11 a 20 anos: %.2f kg\n", soma_peso_11_20 / count_11_20);
    else
        printf("11 a 20 anos: Sem dados.\n");

    if (count_21_30 > 0)
        printf("21 a 30 anos: %.2f kg\n", soma_peso_21_30 / count_21_30);
    else
        printf("21 a 30 anos: Sem dados.\n");

    if (count_mais_30 > 0)
        printf("Mais de 30 anos: %.2f kg\n", soma_peso_mais_30 / count_mais_30);
    else
        printf("Mais de 30 anos: Sem dados.\n");

    return 0;
}
