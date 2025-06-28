#include <stdio.h>

/*
@author leo neto
Lê nota 1 e nota 2 de 5 alunos, calcula e imprime:
- nota1, nota2, média do aluno
- média geral da turma ao final
*/

int main() {
    float nota1, nota2, media, soma_turma = 0.0;
    int i;

    printf("=== LISTAGEM DE NOTAS E MÉDIAS ===\n\n");
    printf("Aluno\tNota1\tNota2\tMédia\n");

    for (i = 1; i <= 5; i++) {
        printf("\nAluno %d\n", i);

        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);

        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2.0;
        soma_turma += media;

        printf("%d\t%.2f\t%.2f\t%.2f\n", i, nota1, nota2, media);
    }

    float media_turma = soma_turma / 5.0;

    printf("\nMédia geral da turma: %.2f\n", media_turma);

    return 0;
}
