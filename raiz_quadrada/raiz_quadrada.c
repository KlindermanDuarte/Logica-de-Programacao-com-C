#include<stdio.h>
#include<math.h>
int main(){

    float num_digi, raiz;

    printf("Digite um número para calcularmos a raiz quadrada: ");
    scanf("%f",&num_digi);
    
    raiz = sqrt(num_digi);
    printf("A raiz quadrada do número digitado é: %f\n", raiz);

    return 0;
}