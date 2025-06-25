#include<stdio.h>

int main () {

    int i, j, k;
    int cubo[4][4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,18,20,21,22,23,24,25,26,27,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,18,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,37,36};

    for(i = 0; i < 4; i++){
        for(j = 0; j < 4; j++){
            for(k = 0; k < 4; k++){
                
                if(i == j && i==k){
                    printf("esta na posição[%i][%i][%i] = %i\t", i,j,k,cubo[i][j][k]);
                    printf("coordenadas iguais\n");
                }
                else{
                    printf("esta na posição[%i][%i][%i] = %i\n", i,j,k,cubo[i][j][k]);
                }
               
                
                
            }
        }
    }
    return 0;
}