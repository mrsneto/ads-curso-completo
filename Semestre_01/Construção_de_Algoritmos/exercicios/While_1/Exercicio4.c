#include <stdio.h>

/*
@author leo neto
Conta pessoas por faixa etária enquanto idade digitada for válida (0 a 110).
*/

int main() {
    int idade;
    int menores = 0, adultos = 0, idosos = 0;

    printf("Digite idades (entre 0 e 110). Para encerrar, digite um valor fora desse intervalo.\n");

    while (1) {
        printf("Digite a idade: ");
        scanf("%d", &idade);

        if (idade < 0 || idade > 110) {
            break;
        }

        if (idade < 18) {
            menores++;
        } else if (idade <= 59) {
            adultos++;
        } else {
            idosos++;
        }
    }

    printf("\nTotal de pessoas menores de idade: %d\n", menores);
    printf("Total de pessoas adultas: %d\n", adultos);
    printf("Total de pessoas idosas: %d\n", idosos);

    return 0;
}
