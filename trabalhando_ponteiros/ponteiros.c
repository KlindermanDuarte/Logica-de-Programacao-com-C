#include<stdio.h>
#include<stdlib.h>


/*Trabalhando com ponteiros*/

int main(){
    /*Criação de um ponteiro di tipo "int"*/
    int *ponteiro;

    /*Criação de uma variável do tipo "int" que tem em seu conteúdo o valor "150"*/
    int numero_inteiro = 150;
    
    /*Imprimimos na tela o endereço de memória associado a variável "numero_inteiro"*/
    printf("O endereço de memória da variável \"numero_inteiro\" é \"%i\"\n", &numero_inteiro);
    printf("\n");

    /*Atribuímos esse número do endereço de memória da variável "numero_inteiro" a variável "ponteiro"*/
    ponteiro = &numero_inteiro;
    

    /*Imprimimos o conteúdo da variável "ponteiro" que foi armazenado o endereço de memória da vairável "numero_inteiro"*/
    printf("O endereço de memória que a variável \"ponteiro\" armazenou é \"%i\"\n", ponteiro);
    printf("\n");

    /*Imprimimos o conteúdo da variável "numero_inteiro" que o "*ponteiro" esta acessando através do endereço de memória*/
    printf("O valor do conteúdo de memória que a variável \"ponteiro\" está acessando é \"%i\"\n", *ponteiro);
    printf("\n");

    /*
    *Atribuímos um novo valor ao conteúdo do ponteiro "*ponteiro" e automáticamente ele 
    *altera o valor do conteúdo da variável "numero_inteiro", onde antes era "150" virou "1995".
    */
    *ponteiro = 1995;

    /*Impimimos o conteúdo do ponteiro "*ponteiro" que no caso é "1995"*/
    printf("Foi alterado o valor que estava contido na variável \"numero_inteiro\" através da variavel ponteiro.\n");
    printf("\n");
    printf("O valor atual é %i\n", *ponteiro);
    printf("\n");

    /*Imprimimos o conteúdo da variável inteira "numero_inteiro"*/
    printf("Conteúdo da variável \"numero_inteiro\" é %i\n", numero_inteiro);
    printf("\n");

    return 0;
}