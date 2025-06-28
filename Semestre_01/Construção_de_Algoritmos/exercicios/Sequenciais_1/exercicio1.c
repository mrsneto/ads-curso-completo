#include <stdio.h>
/*
@author leo neto
1)Escreva um algoritmo que leia uma variável inteira X e imprima seu sucessor e seu antecessor.
*/
int main(){
    int ant,suc,x;

    printf("Digite um numero:\n");
    scanf("%d", &x);

    ant = x - 1;
    suc = x + 1;

    printf("Numero digitado: %d\n", x);
    printf("Sucessor: %d\n", suc);
    printf("Antecessor: %d\n", ant);

    return 0;

}