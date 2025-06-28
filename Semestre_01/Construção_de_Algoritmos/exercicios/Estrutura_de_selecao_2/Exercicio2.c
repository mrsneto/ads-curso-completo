#include <stdio.h>

/*
@author leo neto
Classifica a categoria de um jogador de futebol com base em sua idade.
*/

int main() {
    int idade;

    printf("Digite a idade do jogador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18) {
        printf("Categoria: Adulto\n");
    } else {
        printf("Idade inválida! Categoria não disponível para menores de 5 anos.\n");
    }

    return 0;
}
