#include<stdio.h>

int main (){
    int number_impar;
    for(number_impar = 0; number_impar <= 200; number_impar++){
        if(number_impar%2 != 0){
            printf("%i\n", number_impar);
        }
    }
    return 0;
}