#include <stdio.h>
#include <ctype.h>  // para tolower()

/*
@author leo neto
Lê idade e sexo de várias pessoas até idade negativa.
Calcula:
- idade média geral
- total de mulheres entre 30 e 45 anos
- total de homens
*/

int main() {
    int idade;
    char sexo;
    int total_pessoas = 0;
    int soma_idade = 0;
    int mulheres_30_45 = 0;
    int homens = 0;

    printf("Digite a idade e o sexo de cada pessoa.\n");
    printf("Para encerrar, digite idade negativa.\n");

    while (1) {
        printf("\nIdade: ");
        scanf("%d", &idade);

        if (idade < 0)
            break;

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo);
        sexo = tolower(sexo);

        total_pessoas++;
        soma_idade += idade;

        if (sexo == 'f') {
            if (idade >= 30 && idade <= 45) {
                mulheres_30_45++;
            }
        } else if (sexo == 'm') {
            homens++;
        } else {
            printf("Sexo inválido. Considerando como não classificado.\n");
        }
    }

    if (total_pessoas > 0) {
        float media_idade = (float)soma_idade / total_pessoas;
        printf("\nIdade média entre todos os entrevistados: %.2f anos\n", media_idade);
    } else {
        printf("\nNenhuma pessoa cadastrada.\n");
    }

    printf("Total de mulheres com idade entre 30 e 45 anos: %d\n", mulheres_30_45);
    printf("Total de homens: %d\n", homens);

    return 0;
}
