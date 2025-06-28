#include <stdio.h>

/*
@author leo neto
Classifica a pessoa como:
- Não eleitor (idade < 16)
- Eleitor facultativo (16 ≤ idade < 18 ou idade > 65)
- Eleitor obrigatório (18 ≤ idade ≤ 65)
*/

int main() {
    int idade;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (idade < 16) {
        printf("Classe eleitoral: Não eleitor\n");
    } else if ((idade >= 16 && idade < 18) || idade > 65) {
        printf("Classe eleitoral: Eleitor facultativo\n");
    } else {
        printf("Classe eleitoral: Eleitor obrigatório\n");
    }

    return 0;
}
