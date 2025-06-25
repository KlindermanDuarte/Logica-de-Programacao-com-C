#include<stdio.h>

int main(){
    int mult_tres;

    for(mult_tres = 0; mult_tres <= 150; mult_tres++){
        if (mult_tres%3 == 0)
        {
            printf("%i\n", mult_tres);
        }
        
    }
    return 0;
}