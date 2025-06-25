#include <stdio.h>

int main(){

    int numero_digitado, contador, fatorial = 1;

    printf("Digite o número que você quer saber o fatorial: ");
    scanf("%i", &numero_digitado);

    for(contador = 1; contador <= numero_digitado; contador++){
        fatorial *= contador;
    }

    printf("O fatorial do número digitado é: %i\n", fatorial);

    return 0;
}