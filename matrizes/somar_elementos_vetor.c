#include<stdio.h>

int main (){
    int vetor[] = {1,2,3,4,5,6,7,8,9,21,12,15};
    int soma;

    for(int i = 0; i < 11; i++)
        soma += vetor[i];
    
    printf("A soma dos elemento do vetor é: %i\n", soma);
}