#include <stdio.h>

/*
@author leo neto
Este programa determina o valor do plano de saúde conforme a idade do cliente:

Idade                   | Valor
------------------------|--------
Até 10 anos            | R$ 30,00
De 11 a 29 anos        | R$ 60,00
De 30 a 45 anos        | R$ 120,00
De 46 a 59 anos        | R$ 150,00
De 60 a 65 anos        | R$ 250,00
Acima de 65 anos       | R$ 400,00
*/

int main() {
    int idade;
    float valor_plano;

    printf("Digite a idade do cliente: ");
    scanf("%d", &idade);

    if (idade <= 10) {
        valor_plano = 30.00;
    } else if (idade <= 29) {
        valor_plano = 60.00;
    } else if (idade <= 45) {
        valor_plano = 120.00;
    } else if (idade <= 59) {
        valor_plano = 150.00;
    } else if (idade <= 65) {
        valor_plano = 250.00;
    } else {
        valor_plano = 400.00;
    }

    printf("Valor do plano de saúde: R$ %.2f\n", valor_plano);

    return 0;
}
