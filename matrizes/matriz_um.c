#include<stdio.h>
#include<stdlib.h>
int i,j;

int main(){
    int matriz[3][3];
    
    printf("Informa os valores da matriz\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            scanf("%i", &matriz[i][j]);
        
    }
    for ( i = 0; i < 3; i++){
        for(j = 0; j < 3; j++)
            printf("|%4i", matriz[i][j]);
        
        printf("|\n");

    }
    
    return 0;
}