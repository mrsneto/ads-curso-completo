#include <stdio.h>

/*
@author leo neto
Calcula o tempo necessário para a população do país A ultrapassar a do país B.
*/

int main() {
    double popA = 5000000;
    double popB = 7000000;
    double taxaA = 0.03;  // 3% ao ano
    double taxaB = 0.02;  // 2% ao ano
    int anos = 0;

    while (popA <= popB) {
        popA += popA * taxaA;
        popB += popB * taxaB;
        anos++;
    }

    printf("Será necessário %d anos para que a população do país A ultrapasse a do país B.\n", anos);

    return 0;
}
