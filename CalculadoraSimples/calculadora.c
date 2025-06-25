#include <stdio.h>
#include <stdlib.h>
#include "bibliotecas_pessoais/biblioper.h"

int main(){
    
    float primeiro_numero, segundo_numero, resultado_operacao;
    int escolha_usuario;
    
    printf("Digite uma das opções abaixo:\n");
    printf("1 - Soma\n");
    printf("2 - Multiplicação\n");
    printf("3 - Subtração\n");
    printf("4 - Divisão\n");
    scanf("%i", &escolha_usuario);

    switch (escolha_usuario)
    {
    case 1:
        printf("Digite o primeiro número para ser somado: \n");
        scanf("%f", &primeiro_numero);
        printf("Digite o segundo número para ser somado: \n");
        scanf("%f", &segundo_numero);

        resultado_operacao = funcaoSoma(primeiro_numero, segundo_numero);
        break;
    case 2:
        printf("Digite o primeiro número para ser multiplicado: \n");
        scanf("%f", &primeiro_numero);
        printf("Digite o segundo número para ser multiplicado: \n");
        scanf("%f", &segundo_numero);

        resultado_operacao = funcaoMultiplicacao(primeiro_numero,segundo_numero);
        break;
    case 3:
        printf("Digite o primeiro número para ser subtraído: \n");
        scanf("%f", &primeiro_numero);
        printf("Digite o segundo número para ser subtraído: \n");
        scanf("%f", &segundo_numero);

        resultado_operacao = funcaoSubtracao(primeiro_numero,segundo_numero);
        break;
    case 4:
        printf("Digite o primeiro número para ser dividido: \n");
        scanf("%f", &primeiro_numero);
        printf("Digite o segundo número para ser dividido: \n");
        scanf("%f", &segundo_numero);

        resultado_operacao = funcaoDivisao(primeiro_numero,segundo_numero);
        break;
    default:
        printf("A opção que você digitou não é válida\n");
        break;
    }

    printf("O resultado da operação é: %.2f\n", resultado_operacao);
}