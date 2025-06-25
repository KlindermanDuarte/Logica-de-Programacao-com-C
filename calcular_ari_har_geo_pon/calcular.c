#include<stdio.h>

float numero_x, numero_y, numero_z;

float geometria(float base, float largura, float comprimento){
    return base*largura*comprimento;
}

float ponderada(float variavel_um, float variavel_dois, float variavel_tres){
    return (variavel_um + 2*variavel_dois + 3*variavel_tres)/6;
}

float harmonica(float fatia_um, float fatia_dois, float fatia_tres){
    return 1/((1/fatia_um)+(1/fatia_dois)+(1/fatia_tres));
}

float aritmetica(float numero_um, float numero_dois, float numero_tres){
    return (numero_um + numero_dois + numero_tres)/3;
}

void solicitarValores(){

    printf("Digite o primeiro numero: ");
    scanf("%f", &numero_x);

    printf("Digite o segundo numero: ");
    scanf("%f", &numero_y);

    printf("Digite o terceiro numero: ");
    scanf("%f", &numero_z);
}

int main(){
    int resposta;
    do{
        int opcao;
        

        printf("Digite uma da opções abaixo\n");
        printf("1 - Geometria\n");
        printf("2 - Ponderada\n");
        printf("3 - Harmônica\n");
        printf("4 - Aritmética\n");
        printf("Opção: ");
        scanf("%i", &opcao);


        switch (opcao)
        {
            case 1:
            float resultado_geometria;
            solicitarValores();
            resultado_geometria = geometria(numero_x, numero_y, numero_z);
            printf("O resutado do cálculo geométrico é %.2f\n", resultado_geometria);
            break;
    
            case 2:
            float resultado_ponderada;
            solicitarValores();
            resultado_ponderada = ponderada(numero_x, numero_y, numero_z);
            printf("O resutado do cálculo ponderado é %.2f\n", resultado_ponderada);
            break;
    
            case 3:
            float resultado_harmonica;
            solicitarValores();
            resultado_harmonica = harmonica(numero_x, numero_y, numero_z);
            printf("O resutado do cálculo harmônico é %.2f\n", resultado_harmonica);
            break;

            case 4:
            float resultado_aritimetica;
            solicitarValores();
            resultado_aritimetica = aritmetica(numero_x, numero_y, numero_z);
            printf("O resutado do cálculo aritmético é %.2f\n", resultado_aritimetica);
            break;
            default:
            printf("Opção inválida!!!");
            break;
        }

        printf("Deseja fazer outra operação? Digite \"1 - sim\" ou \"2 - não\": ");
        scanf("%i", &resposta);
    
    }while(resposta == 1);
    return 0;
}