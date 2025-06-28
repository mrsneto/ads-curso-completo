#include <stdio.h>

/*
@author leo neto
8) Crie um algoritmo que receba uma temperatura em graus centígrados (C)
   e imprima sua conversão em graus Fahrenheit (F).
   Fórmula: F = (9 * C + 160) / 5
*/

int main() {
    float celsius, fahrenheit;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (9 * celsius + 160) / 5;

    printf("Temperatura em Fahrenheit: %.2f°F\n", fahrenheit);

    return 0;
}
