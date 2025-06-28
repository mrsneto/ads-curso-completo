#include <stdio.h>

/*
@author leo neto
Calcula em quantos anos Pafúncio será mais alto que Gertrudes.
*/

int main() {
    double altura_gertrudes = 1.50;  // metros
    double altura_pafuncio = 1.10;   // metros
    double crescimento_gertrudes = 0.02;  // 2 cm = 0.02 m por ano
    double crescimento_pafuncio = 0.03;   // 3 cm = 0.03 m por ano
    int anos = 0;

    while (altura_pafuncio <= altura_gertrudes) {
        altura_gertrudes += crescimento_gertrudes;
        altura_pafuncio += crescimento_pafuncio;
        anos++;
    }

    printf("Serão necessários %d anos para que Pafúncio seja mais alto que Gertrudes.\n", anos);

    return 0;
}
