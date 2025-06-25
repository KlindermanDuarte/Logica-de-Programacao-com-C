#include<stdio.h>

int main(){
    int number_base, number_deslocamento, resultado;

    printf("Digite um número para a base: ");
    scanf("%i", &number_base);

    printf("Digite a um número inteiro para representar a quantidade de casas decimais para representar o deslocamento de bits:");
    scanf("%i", &number_deslocamento);

    resultado = number_base >> number_deslocamento;

    printf("O número resultante do deslocamento à direita é %i\n", resultado);

    resultado = number_base << number_deslocamento;

    printf("O número resultante do deslocamento à esquerda é %i\n", resultado);


    return 0;
}