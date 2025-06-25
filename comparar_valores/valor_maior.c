#include <stdio.h>

int main(){
    int numero_um, numero_dois;

    printf("Digite o primeiro número: ");
    scanf("%i", &numero_um);

    printf("Digite o segundo número: ");
    scanf("%i", &numero_dois);

    if (numero_um > numero_dois)
    {
        printf("O número %i é maior que %i.\n", numero_um, numero_dois);
    }
    else if(numero_um == numero_dois)
    {   
        printf("Números iguais!\n");
    }
    else
    {
        printf("O número %i é maior que o número %i.\n", numero_dois, numero_um);
    }


    return 0;
}