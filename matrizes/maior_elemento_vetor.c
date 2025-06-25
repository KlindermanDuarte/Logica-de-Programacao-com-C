#include<stdio.h>

int main () {
    int maior_elemento, vetor[] = {1,15,14,28,128,39,6,124};
    

    for(int contador = 0; contador < 7; contador ++){
        if(vetor[contador] < vetor[contador + 1]){
            maior_elemento = vetor[contador + 1];
        }
        else{
            maior_elemento = maior_elemento;
        }
    }
    printf("O maior número da lista é: %i\n", maior_elemento);
}