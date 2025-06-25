#include<stdio.h>

int main () {

    int matriz[3][3];
    int i, j;

   
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("Digite um valor para a posição da matriz mat[%i][%i]:  ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    } 

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("|%2i", matriz[i][j]);
        }
        printf("|\n");
    }

  return 0;
}