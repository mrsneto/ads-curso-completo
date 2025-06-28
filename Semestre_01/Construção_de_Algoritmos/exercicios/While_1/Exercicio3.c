#include <stdio.h>
#include <math.h>

/*
@author leo neto
Lê 10 números positivos, valida entrada e imprime a raiz quadrada de cada.
*/

int main() {
    int count = 0;
    double num;

    while (count < 10) {
        printf("Digite o número positivo %d: ", count + 1);
        scanf("%lf", &num);

        if (num < 0) {
            printf("Número negativo não é permitido. Tente novamente.\n");
            continue;  
        }

        double raiz = sqrt(num);
        printf("Raiz quadrada de %.2lf é %.4lf\n", num, raiz);
        count++;
    }

    return 0;
}
