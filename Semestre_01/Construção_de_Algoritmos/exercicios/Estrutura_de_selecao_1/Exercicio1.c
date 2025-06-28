#include <stdio.h>

/*
@author leo neto
15) A prefeitura de Corumbá abriu uma linha de crédito.
    O valor da prestação não pode ultrapassar 30% do salário bruto,
    e deve ser superior a R$ 100.

    O valor do empréstimo é: parcela * 36 - 15% (juros).

    Faça um algoritmo que:

    - Leia o salário bruto do servidor;
    - Verifique se ele pode ou não fazer o empréstimo;
    - Calcule:
        * Valor máximo da parcela;
        * Valor do empréstimo concedido;
        * Valor dos juros cobrados.
*/

int main() {
    float salario_bruto, valor_prestacao_max, valor_emprestimo_bruto;
    float juros, valor_emprestimo_liquido;

    printf("Digite o salário bruto: R$ ");
    scanf("%f", &salario_bruto);

    valor_prestacao_max = salario_bruto * 0.30;

    if (valor_prestacao_max <= 100) {
        printf("\nEmpréstimo não autorizado: valor da parcela (R$ %.2f) é inferior ou igual a R$ 100.\n", valor_prestacao_max);
    } else {
        valor_emprestimo_bruto = valor_prestacao_max * 36;
        juros = valor_emprestimo_bruto * 0.15;
        valor_emprestimo_liquido = valor_emprestimo_bruto - juros;

        printf("\nEmpréstimo aprovado!\n");
        printf("Valor máximo da parcela: R$ %.2f\n", valor_prestacao_max);
        printf("Valor total do empréstimo (antes dos juros): R$ %.2f\n", valor_emprestimo_bruto);
        printf("Valor dos juros (15%%): R$ %.2f\n", juros);
        printf("Valor do empréstimo concedido (após juros): R$ %.2f\n", valor_emprestimo_liquido);
    }

    return 0;
}
