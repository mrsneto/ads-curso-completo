#include <stdio.h>

/*
@author leo neto
13) Escreva um algoritmo que receba a quantidade de hambúrgueres
    e calcule a quantidade de carne (em quilos) necessária para produzi-los,
    sabendo que cada hambúrguer contém 200g de carne.
*/

int main() {
    int qtd_hamburgueres;
    float carne_total_kg;

    printf("Digite a quantidade de hambúrgueres: ");
    scanf("%d", &qtd_hamburgueres);

    
    carne_total_kg = qtd_hamburgueres * 0.2;

    printf("Serão necessários %.2f kg de carne.\n", carne_total_kg);

    return 0;
}
