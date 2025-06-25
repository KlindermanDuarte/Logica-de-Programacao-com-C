#include <stdio.h>
 int main (){

    int opcao;
    char sexo;
    float altura, peso_ideal;

    do{
        printf("Digite seu sexo\n");
        printf("F-Feminino\n");
        printf("M-Masculino\n");
        printf("Opção: ");
        scanf("%c",&sexo);
        printf("Digite sua altura: ");
        scanf("%f", &altura);

        if(sexo == 'F' || sexo == 'f'){
            peso_ideal = (62.1*altura) - 44.7;
            printf("O seu peso ideal é: %.2fkg\n", peso_ideal);
        }
        else if(sexo == 'M' || sexo == 'm'){
            peso_ideal = (72.7*altura)-58;
            printf("O seu peso ideal é: %.2fkg\n", peso_ideal);
        }

        printf("Deseja fazer outra operação? 1 - Sim ou 2-Não: ");
        scanf("%i", &opcao);
        getchar(); 
    }while(opcao == 1);
    

    return 0;
 }