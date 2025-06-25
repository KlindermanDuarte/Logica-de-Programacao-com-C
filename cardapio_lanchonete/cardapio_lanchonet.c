#include<stdio.h>

int main(){
    int codigo_produto, quantidade_produto;
    float valor_para_pagar;
    do
    {
        printf("==============================================================\n");
        printf("|LANCHONETE - LANCHEBEM                                      |\n");
        printf("==============================================================\n");
        printf("|Especificação | Código    | Preço                           |\n");
        printf("==============================================================\n");
        printf("|Cachorro      | 100       | 4,2                             |\n");
        printf("|Quente        |           |                                 |\n");
        printf("==============================================================\n");
        printf("|Bauru Simples | 101       | 3,3                             |\n");
        printf("==============================================================\n");
        printf("|Bauru com ovo | 102       | 5,5                             |\n");
        printf("==============================================================\n");
        printf("|Hambúrger     | 103       | 6,2                             |\n");
        printf("==============================================================\n");
        printf("|Cheeseburguer | 104       | 5,3                             |\n");
        printf("==============================================================\n");
        printf("|Refrigerante  | 105       | 4,5                             |\n");
        printf("==============================================================\n");
        
        printf("Digite o código do produto ao qual você deseja: ");
        scanf("%i", &codigo_produto);
        printf("Digite a quantidade do produto que você quer: ");
        scanf("%i", &quantidade_produto);
        if (codigo_produto == 100)
        {
           valor_para_pagar = quantidade_produto*4.2;
           printf("Especificação:.....................Cachorro Quente\n");
           printf("Código");
        }
        
        printf("");
    } while (condition);
    
    

    return 0;
}