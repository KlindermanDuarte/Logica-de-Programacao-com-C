#include <stdio.h>
#include <stdlib.h>
#include "bibliotecas_pessoais/biblicalcfatorial.h"

void main(){
    int numero_digitado_usuario_1, numero_fatorial_dois;
    
    printf("Digite um número interio para calcularmos o seu fatorial: ");
    scanf("%i", &numero_digitado_usuario_1);

    if(numero_digitado_usuario_1 > 0){
        printf("\nO número que você digiou é positivo!");
        numero_fatorial_dois = CalcularFatorial(numero_digitado_usuario_1);
        printf("\nO fatorial para o número digitado é %i\n", numero_fatorial_dois);
    }
    else{
        
        if(numero_digitado_usuario_1 < 0){
            while(numero_digitado_usuario_1 < 0){
                printf("\nO número que você digitou é negativo.\n");
                printf("Vamos tentar novamente. Digite um número inteiro positivo: ");
                scanf("%i", &numero_digitado_usuario_1);
            }
            numero_fatorial_dois = CalcularFatorial(numero_digitado_usuario_1);
            printf("\nO fatorial para o número digitado é %i", numero_fatorial_dois);
        }

        else{
            printf("\nO número que você digitou é ZERO!!\n");
            CalcularFatorial(numero_digitado_usuario_1);
        }

    }
    
    printf("\nFinalizando o programa!!!\n");
    system("pause");
}


