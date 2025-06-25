#include <stdio.h>
#include <stdlib.h>

char nome[50];
float salario;

main(){
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("\nDigite seu salário: ");
    scanf("%f", &salario);
    
    if(salario >= 1800 && salario <= 2000){
        printf("Salario válido para financiamento: %s %.2f\n", nome, salario);
    }
    else{
        printf("Salário inválido para financiamento: %s %.2f\n", nome, salario);
    }
}