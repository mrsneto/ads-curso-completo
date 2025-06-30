#include <stdio.h>


/*
Cronometro decrescente com array

tempo[0] = minutos
tempo[1] = segundos (dezenas)
tempo[2] = segundos (unidades)

Exemplo: tempo = {6, 2, 0} -> 6 minutos e 20 segundos
*/

int main() {
    int tempo[3];

    // Entrada de dados
    printf("Digite o tempo inicial do cronometro:\n");
    printf("Minutos: ");
    scanf("%d", &tempo[0]);
    printf("Segundos (dezenas): ");
    scanf("%d", &tempo[1]);
    printf("Segundos (unidades): ");
    scanf("%d", &tempo[2]);

    // Validacao opcional (segundos entre 0 e 5 para dezenas e 0 a 9 para unidades)
    if (tempo[1] < 0 || tempo[1] > 5 || tempo[2] < 0 || tempo[2] > 9) {
        printf("Erro: segundos invalidos.\n");
        return 1;
    }

    // Converte para segundos totais
    int total_segundos = tempo[0] * 60 + tempo[1] * 10 + tempo[2];

    // Contagem regressiva
    while (total_segundos >= 0) {
        int min = total_segundos / 60;
        int seg = total_segundos % 60;
        printf("%02d:%02d\n", min, seg);
        sleep(1); // Espera 1 segundo
        total_segundos--;
    }

    printf("Tempo esgotado!\n");

    return 0;
}
