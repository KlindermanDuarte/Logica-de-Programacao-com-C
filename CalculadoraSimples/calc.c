/*Inclusão das bibliotecas */

#include <stdio.h>
#include <stdlib.h>


float numero_um, numero_dois, resultado;


int funcaOperacaoMenu() {
    int operacao;
    printf("_________________________________________________________\n");
    printf("|                   Calculadora Simples                 |\n");
    printf("=========================================================\n");
    printf("| 1 - Somar                  |   2 - Subtrair           |\n");
    printf("=========================================================\n");
    printf("| 3 - Multiplicar            |   4 - Dividir            |\n");
    printf("=========================================================\n");
    printf("|                      5 - Sair                         |\n");
    printf("=========================================================\n");

    printf("Digite uma das opções de operação: ");
    scanf("%i", &operacao);
    while (getchar() != '\n'); // Limpar o buffer de entrada
    return operacao;
}

float soma() {
    printf("Digite o primeiro número: ");
    scanf("%f", &numero_um);
    printf("\nDigite o segundo número: ");
    scanf("%f", &numero_dois);
    resultado = numero_um + numero_dois;
    printf("O resultado da soma de %.2f + %.2f = %.2f\n", numero_um, numero_dois, resultado);
    return resultado;
}

float subtracao() {
    printf("Digite o primeiro número: ");
    scanf("%f", &numero_um);
    printf("\nDigite o segundo número: ");
    scanf("%f", &numero_dois);
    resultado = numero_um - numero_dois;
    printf("O resultado da subtração de %.2f - %.2f = %.2f\n", numero_um, numero_dois, resultado);
    return resultado;
}

float multiplicacao() {
    printf("Digite o primeiro número: ");
    scanf("%f", &numero_um);
    printf("\nDigite o segundo número: ");
    scanf("%f", &numero_dois);
    resultado = numero_um * numero_dois;
    printf("O resultado da multiplicação de %.2f x %.2f = %.2f\n", numero_um, numero_dois, resultado);
    return resultado;
}

float divisao() {
    printf("Digite o primeiro número: ");
    scanf("%f", &numero_um);
    printf("\nDigite o segundo número: ");
    scanf("%f", &numero_dois);
    if (numero_dois == 0) {
        printf("Erro: Divisão por zero!\n");
        return 0; // Ou outra forma de indicar erro
    }
    resultado = numero_um / numero_dois;
    printf("O resultado da divisão de %.2f / %.2f = %.2f\n", numero_um, numero_dois, resultado);
    return resultado;
}

void meuMenu() {
    int operacao_menu = funcaOperacaoMenu();

    switch (operacao_menu) {
        case 1:
            soma();
            break;
        case 2:
            subtracao();
            break;
        case 3:
            multiplicacao();
            break;
        case 4:
            divisao();
            break;
        case 5:
            printf("Programa finalizado com sucesso!!\n");
            exit(0); // Terminar o programa aqui é mais direto
            break;
        default:
            printf("Opção inválida. Por favor, digite um número entre 1 e 5.\n");
            break;
    }
}

int main() {
    char opcao;
    do {
        meuMenu();
        printf("Deseja fazer outra operação? Digite \"y\" ou \"n\": ");
        scanf(" %c", &opcao); // Note o espaço antes do %c para consumir a nova linha
        while (getchar() != '\n'); // Limpar o buffer após ler a opção
    } while (opcao == 'y');

    printf("Programa finalizado.\n");
    return 0;
}