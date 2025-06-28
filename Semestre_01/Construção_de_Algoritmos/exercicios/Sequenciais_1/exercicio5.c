#include <stdio.h>
#include <math.h>

/*
@author leo neto
5) Escreva um algoritmo que receba a base e a altura de um retângulo e imprima:

   a) Perímetro
   b) Área
   c) Diagonal
*/

int main() {
    float base, altura;
    float perimetro, area, diagonal;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    area = base * altura;
    diagonal = sqrt(base * base + altura * altura);

    printf("\nPerímetro = %.2f\n", perimetro);
    printf("Área = %.2f\n", area);
    printf("Diagonal = %.2f\n", diagonal);

    return 0;
}
