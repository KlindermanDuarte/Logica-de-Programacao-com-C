#include<stdio.h>

int main(){

    int number_par;
    
    for(number_par=0;number_par <= 200; number_par++){
        
        if(number_par%2 == 0){
           printf("%i\n", number_par);
        }
    }

    return 1;
}