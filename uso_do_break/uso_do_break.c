#include<stdio.h>

int main(){
    int a,b, contador;

    printf("Digite um número: ");
    scanf("%i", &a);

    printf("Digite um segundo número: ");
    scanf("%i", &b);

    for(contador = a; contador <= b; contador ++){
        printf("%i\n", contador);
        if (contador == 5)
        {
            break;
        }
        
    }

    return 0;
}