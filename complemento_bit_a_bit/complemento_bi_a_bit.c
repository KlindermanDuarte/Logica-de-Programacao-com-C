#include<stdio.h>

int main(){
    int numero_inteiro, numero_renovado;

    printf("Digite um número inteiro: ");
    scanf("%i",&numero_inteiro);

    numero_renovado = ~numero_inteiro;

    printf("O complemento do número %i é %i\n", numero_inteiro, numero_renovado);

    return 0;
}