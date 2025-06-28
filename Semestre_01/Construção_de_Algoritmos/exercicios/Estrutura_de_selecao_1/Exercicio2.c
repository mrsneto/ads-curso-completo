#include <stdio.h>
#include <ctype.h>  // Para usar tolower()

/*
@author leo neto
Verifica se o candidato está apto para o programa Jovem Aprendiz,
com base na idade e se está cursando o ensino médio.
*/

int main() {
    char cursandoEnsinoMedio;
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Voce esta cursando o ensino medio? (S/N): ");
    scanf(" %c", &cursandoEnsinoMedio);  // espaço antes de %c ignora enter pendente

    cursandoEnsinoMedio = tolower(cursandoEnsinoMedio);  // Transforma em minúsculo

    if (idade >= 14 && idade <= 24) {
        if (cursandoEnsinoMedio == 's') {
            printf("Você tem %d anos e está cursando o ensino médio.\n", idade);
            printf("Está apto para o programa Jovem Aprendiz.\n");
        } else {
            printf("Você tem %d anos mas não está cursando o ensino médio.\n", idade);
            printf("Não está apto para o programa Jovem Aprendiz.\n");
        }
    } else {
        printf("Você tem %d anos. A idade permitida é entre 14 e 24 anos.\n", idade);
        printf("Não está apto para o programa Jovem Aprendiz.\n");
    }

    return 0;
}
