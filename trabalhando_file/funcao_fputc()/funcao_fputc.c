#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char fraseMotivacional[151];
int contadorFraseMotivacional = 0;
char caracterArquivo;
FILE *ArqGravaChar;

void criacaoArquivo(){
    ArqGravaChar = fopen("teste_funcao_fputc.txt", "w+");

    if(ArqGravaChar == NULL){
        printf("Erro ao criar o arquivo. Verifique o caminho!\n");
        exit(1);
    }
    else{
        printf("Arquivo criado com sucesso!\n");
    }
}

void perguntasAoUsusario(){
    printf("Digite uma frase motivacional: ");
    gets(fraseMotivacional);
    
}

void leituraCaracterTexto(){
    int contadorLeitura;
    if (ArqGravaChar == NULL)
    {
        printf("Arquivo indisponível para leitura\n");
        exit(1);
    }
    
    while(contadorFraseMotivacional < strlen(fraseMotivacional)){
        caracterArquivo = fgetc(ArqGravaChar);
        printf("%c", caracterArquivo);
        contadorFraseMotivacional++;
    }
    printf("\n");
    
}

int main () {

   
    int contadorCaracter;

    criacaoArquivo();
    perguntasAoUsusario();

    /*Como a função de repetição "for()" só tinha uma linha foi possível utilizá-la sem as chaves "{}"*/

    for(contadorCaracter = 0; contadorCaracter <= strlen(fraseMotivacional); contadorCaracter++)
        fputc(fraseMotivacional[contadorCaracter], ArqGravaChar);
    
    /*Essa função "rewind()" colocar o indicador de posição que estava no fianl do texto diretamente 
    para o inicio novamente do texto e assim a função "leituraCaracterTexto()" poderá ler todos os
    fazer a leitura de todos os caracteres contidos no texto*/
    rewind(ArqGravaChar);
    leituraCaracterTexto();
    fclose(ArqGravaChar);
    return 0;
}