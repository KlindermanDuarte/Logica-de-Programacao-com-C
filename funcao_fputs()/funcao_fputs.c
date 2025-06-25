#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE *arquivoFputs;
char frase[60];

void criarAquivo(){
    arquivoFputs = fopen("funcao_fputs.txt","w+");

    if(arquivoFputs == NULL){
        printf("Erro ao criar o arquivo.\n");
        exit(1);
    }
    else{
        printf("Arquivo criado com sucesso!!\n");
    }
}

void solicitacaoUsuario(){
    printf("Digite uma frase para gravar no arquivo: ");
    gets(frase);
}

void gravacaoString(){
    int confirmacao = fputs(frase, arquivoFputs);

    if(confirmacao == EOF){
        printf("Erros ao gravar a frase no arquivo.\n");
    }

    printf("Gravação relizada com sucesso com sucesso!!\n");

    /*A função abaixo esta sendo utilizada para imprimir na tela a frase digitada pelo
    usuário, ou seja a função "fputs()" esta "gravando" na saída padrão do pc*/
    
    fputs(frase,stdout);
    
    printf("\n");
    
    
}

void leituraArquivo(){
    
    rewind(arquivoFputs);
    char fraseContidaArquivo[60];
    
    fgets(fraseContidaArquivo, sizeof(frase), arquivoFputs);

    if(fraseContidaArquivo == NULL){
        printf("Erro ao apresentar na tela o conteúdo do arquivo!!!\n");
        exit(1);
    }

    printf("A frase digitada e contida no arquivo é \"%s\"\n", fraseContidaArquivo);
    
}

int main(){
    
    criarAquivo();
    solicitacaoUsuario();
    gravacaoString();
    leituraArquivo();
    fclose(arquivoFputs);
    return 0;
}