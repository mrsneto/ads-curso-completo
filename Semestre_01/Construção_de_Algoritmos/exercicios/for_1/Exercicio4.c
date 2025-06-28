#include <stdio.h>

/*
@author leo neto
Este programa imprime uma tabela de conversão de Fahrenheit para Celsius,
com base em um intervalo fornecido pelo usuário.
Fórmula: C = 5 * (F - 32) / 9
*/

int main() {
    int f_inferior, f_superior, f;

    printf("Digite o limite inferior em Fahrenheit: ");
    scanf("%d", &f_inferior);

    printf("Digite o limite superior em Fahrenheit: ");
    scanf("%d", &f_superior);

    if (f_inferior > f_superior) {
        printf("Erro: o limite inferior deve ser menor ou igual ao superior.\n");
        return 1;
    }

    printf("\nTabela de Conversão: Fahrenheit → Celsius\n");
    printf("-----------------------------------------\n");
    printf("Fahrenheit\tCelsius\n");

    for (f = f_inferior; f <= f_superior; f++) {
        float c = 5.0 * (f - 32) / 9.0;
        printf("%d\t\t%.2f\n", f, c);
    }

    return 0;
}
