#include <stdio.h>

/*
@author leo neto
2) Escreva um algoritmo que leia dois números inteiros, dividendo e divisor, respectivamente,
   e imprima o valor do “dividendo = “, do “divisor = “, do “quociente = “ e do “resto = “ da divisão.
*/

int main(){
    int dividendo, divisor, quociente, resto;

    printf("Digite o valor do dividendo: \n");
    scanf("%d", &dividendo);

    printf("Digite o valor do divisor: \n");
    scanf("%d", &divisor);

    quociente = dividendo / divisor;
    resto = dividendo % divisor;

    printf("Dividendo = %d\n", dividendo);
    printf("Divisor = %d\n", divisor);
    printf("Quociente = %d\n", quociente);
    printf("Resto = %d\n", resto);

    return 0;
}
