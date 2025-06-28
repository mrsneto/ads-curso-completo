#include <stdio.h>
#include <ctype.h> // para tolower()

/*
@author leo neto
Cálculo do peso ideal com base no sexo e altura do usuário.
*/

int main() {
    float peso_atual, altura, peso_ideal, diferenca;
    char sexo;

    printf("Digite seu peso atual (kg): ");
    scanf("%f", &peso_atual);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite seu sexo (M para masculino / F para feminino): ");
    scanf(" %c", &sexo);

    sexo = tolower(sexo); 

    if (sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58;
    } else if (sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
    } else {
        printf("Sexo inválido. Use 'M' para masculino ou 'F' para feminino.\n");
        return 1;
    }

    diferenca = peso_atual - peso_ideal;

    printf("\nSeu peso atual: %.2f kg\n", peso_atual);
    printf("Seu peso ideal: %.2f kg\n", peso_ideal);

    if (diferenca > 0)
        printf("Você está %.2f kg acima do peso ideal.\n", diferenca);
    else if (diferenca < 0)
        printf("Você está %.2f kg abaixo do peso ideal.\n", -diferenca);
    else
        printf("Parabéns! Você está exatamente no peso ideal!\n");

    return 0;
}
