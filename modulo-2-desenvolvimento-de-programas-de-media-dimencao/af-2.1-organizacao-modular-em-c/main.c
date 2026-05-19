#include "calculadora.h"
#include <stdio.h>

int main(){

    int a, b, opcao, resultado;
    char resposta;

    do
    {
        printf("\n==Escolha uma Opção==\n");
        printf("1. Multiplicar\n2. Subtrair\n");
        scanf("%d", &opcao);
        printf("Digite um número: ");
        scanf("%d", &a);
        printf("Digite outro número inteiro: ");
        scanf("%d", &b);

        switch (opcao)
        {
            case 1:
            int result_multiplicar = multiplicar(a, b);
            printf("Resultado: %d", result_multiplicar);
            break;
        
            case 2: 
            int result_subtrair = subtrair(a, b);
            printf("Resultado: %d", result_subtrair);
            break;

            case 0: 
            printf("Quer calcular novamente: (s/n)");
            scanf("%c", &opcao);
            break;

            default:
            printf("Opção inválida");
        }
    } while (resposta == 's');
    return 0;   
}