#include<stdio.h>
#include<stdlib.h>
int i,j, DC, DL;

int main(){
    printf("Digite o número da colunas: ");
    scanf("%i", &DL);

    printf("Digite o número da linha: ");
    scanf("%i", &DC);

    int matriz[DL][DC];

    printf("Informa os valores da matriz\n");
    for(i = 0; i < DL; i++){
        for(j = 0; j < DC; j++)
            scanf("%i", &matriz[i][j]);
        
    }
    for ( i = 0; i < DL; i++){
        for(j = 0; j < DC; j++)
            printf("|%4i", matriz[i][j]);
        
        printf("|\n");

    }

    return 0;
}