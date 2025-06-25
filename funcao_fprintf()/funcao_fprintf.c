#include <stdio.h>
#include <stdlib.h>

FILE *ArqFprintf;
char nome[50], setor[30], funcao[30];
int idade;
float peso, altura;

void criarArquivo(){
    ArqFprintf = fopen("funcao_fprintf.txt","w");

    if(ArqFprintf == NULL){
        printf("Erro ao criar o arquivo!!\n");
        exit(1);
    }
    else{
        printf("Arquivo criado com sucesso!!\n");
    }
}

void entradaDados(){

    printf("Digite seu nome completo: ");
    gets(nome);

    fprintf(stdout,"Digite seu setor: ");
    fgets(setor, sizeof(setor), stdin);

    printf("Digite sua função na empresa: ");
    fgets(funcao, sizeof(funcao), stdin);

    printf("Digite sua idade: ");
    fscanf(stdin,"%i", &idade);

    fprintf(stdout,"Digite seu peso: ");
    scanf("%f", &peso);

    fputs("Digite sua altura: ", stdout);
    scanf("%f", &altura);
}

int apresentacaoDados(){
    fprintf(ArqFprintf,"Nome Completo:.............%s\n", nome);
    

    fprintf(ArqFprintf,"Setor:.....................%s\n", setor);
    

    fprintf(ArqFprintf,"Função:....................%s\n", funcao);
    

    fprintf(ArqFprintf,"Idade:.....................%i\n", idade);
    

    fprintf(ArqFprintf,"Peso:......................%.2f\n", peso);
    

    fprintf(ArqFprintf,"Altura:....................%.2f\n", altura);
    

    fputs("\n", stdout);
    fputs(nome, stdout);
    fputs("\n", stdout);

    fputs(setor, stdout);
    fputs("\n", stdout);

    fputs(funcao, stdout);
    fputs("\n", stdout);

    fprintf(stdout,"Idade:....................%i\n", idade);
    
    fprintf(stdout,"Peso:.....................%.2f\n", peso);

    fprintf(stdout,"Altura:...................%.2f\n", altura);

    

    return 0;
}

 int main(){

    criarArquivo();
    entradaDados();
    apresentacaoDados();
    fclose(ArqFprintf);
    return 0;
 }