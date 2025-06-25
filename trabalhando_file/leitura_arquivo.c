#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Descreva um algoritmo que simule uma rotina de venda que 
emita um cupom fiscal, com os seguintes dados de entrada:
código produto, descrição, quantidade, valor unitário, valortotal, 
data da venda e numero cupom*/

int codigo, quantidade, i=1;
char descricao[80], dataVenda[10];
float ValorUnitario, ValorTotal;

FILE *ArqCupomFiscal;

void CriarArquivo(){
    ArqCupomFiscal = fopen(".\\Cupom_Fiscal.txt","w+");
    if(ArqCupomFiscal == NULL){
        printf("Erro ao criar o arquivo. Verifique o diretório\n");
    }
    else{
        printf("Arquivo criado com sucesso!\n");
    }
}

void RealizarVenda(){
    printf("Digite o código: ");
    scanf("%i", &codigo);

    printf("Digite o produto: ");
    scanf("%s", &descricao);

    printf("Informe a data da venda\n(Ex. 02-03-2025): ");
    scanf("%s", &dataVenda);

    printf("Informe a quantidade: ");
    scanf("%i", &quantidade);

    printf("Digite o valor unitário: ");
    scanf("%f", &ValorUnitario);

    ValorTotal = quantidade * ValorUnitario;
}

void GravandoArquivo(){
    fprintf(ArqCupomFiscal,"+====================================================+\n");
    fprintf(ArqCupomFiscal,"|                   CUPOM FISCAL                     |\n");
    fprintf(ArqCupomFiscal,"|----------------------------------------------------|\n");
    fprintf(ArqCupomFiscal,"|Codigo.................................:%i          |\n", codigo);
    fprintf(ArqCupomFiscal,"|Produto................................:%s          |\n", descricao);
    fprintf(ArqCupomFiscal,"|Data Venda.............................:%s          |\n", dataVenda);
    fprintf(ArqCupomFiscal,"|Quantidade.............................:%i          |\n", quantidade);
    fprintf(ArqCupomFiscal,"|Valor Unit.............................:%.2f        |\n", ValorUnitario);
    fprintf(ArqCupomFiscal,"|----------------------------------------------------|\n");
    fprintf(ArqCupomFiscal,"|                   Valor Total R$:%.2f              |\n", ValorTotal);
    fprintf(ArqCupomFiscal,"|----------------------------------------------------|\n");
    fprintf(ArqCupomFiscal,"|                   Cupom Numero:%i                  |\n", i);
    fprintf(ArqCupomFiscal,"|====================================================|\n");
}
void EmitirCupom () {
    
    printf("+===============================================+\n");
    printf("|                   CUPOM FISCAL                |\n");
    printf("|-----------------------------------------------|\n");
    printf("|Codigo......................................:%i|\n", codigo);
    printf("|Produto.....................................:%s|\n", descricao);
    printf("|Data Venda..................................:%s|\n", dataVenda);
    printf("|Quantidade..................................:%i|\n", quantidade);
    printf("|Valor Unit................................:%2.f|\n", ValorUnitario);
    printf("|-----------------------------------------------|\n");
    printf("|             Valor Total R$:%.2f               |\n", ValorTotal);
    printf("|-----------------------------------------------|\n");
    printf("|             Cupom Numero:%i                   |\n", i);
    printf("|===============================================|\n");
    
}

int main () {

    
    
    // system("Color A"); Esse comando só funciona no Windows.
    CriarArquivo();
    while (i<=3) {
        RealizarVenda();
        GravandoArquivo();
        EmitirCupom();
        i++;
    }
    
}