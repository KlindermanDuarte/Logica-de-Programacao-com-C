#include<stdio.h>

int main(){
    int i, j;
    
    for(i = 1; i < 5; i++){
        j=1;
        while(j<5){
            if (i==j)
            {
                printf("1 ");
            }
            else{
                printf("0 ");
            }
            j++;
        }
        printf("\n");
    }
    
    
    
    /*
    while(i<5){
        for (j = 1; j < 5; j++)
        {
            if(i==j){
                printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        i++;
        printf("\n");
    }
    */
    
    
    
    /*
    *for(i=1;i<5;i++){
    *    for (j = 1; j < 5; j++)
    *    {
    *        if (i==j)
    *        {
    *            printf("1 ");
    *        }
    *        else{
    *            printf("0 ");
    *        }
    *    }
    *    printf("\n");
    *}
    */
    
    /*Outra forma de imprimir a matriz identidade porém com o laço for*/
    /*
    *while (i<5)
    *{
    *    j=1;
    *    while (j<5)
    *    {
    *        if (i==j)
    *        {
    *            printf("1 ");
    *        }
    *        else{
    *            printf("0 ");
    *        }
    *        j++;
    *    }
    *    
    *    i++;
    *    printf("\n");
    *    
    *}
    */
    
    
    return 0;
}