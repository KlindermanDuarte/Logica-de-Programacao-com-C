#include <stdio.h>

void questao001(){
    int quilowatts;
    float salario_minimo, valor_unitario_quilowatts, valor_energia;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite a quantidade de quilowatts consumidos: ");
    scanf("%i", &quilowatts);

    printf("\n%.2f", salario_minimo);
    printf("\n%i\n", quilowatts);

    valor_unitario_quilowatts = (0.14285714285714285 * salario_minimo) / 100;

    printf("Valor unitario quilowatts::...............::%.2f\n", valor_unitario_quilowatts);
    
    valor_energia = valor_unitario_quilowatts * quilowatts;

    printf("Valor da energia::........................::%.2f\n", valor_energia);


    printf("Energia com 10 por cento de desconto::....::%.2f\n", valor_energia - valor_energia*10/100);
}

void questao007(){
    int idade_em_anos;

    printf("Digite sua idade: ");
    scanf("%i", &idade_em_anos);

    idade_em_anos = idade_em_anos * 365;
    printf("%i\n", idade_em_anos);
    if(idade_em_anos < 6570){
        printf("Você é menor de idade\n");
    }
    else{
        printf("Você é maior de idade\n");
    }

    
}

void questao009(){
    float temperatura_media;

    printf("Digite a temperatura média de hoje: ");
    scanf("%f", &temperatura_media);

    if (temperatura_media >=24 && temperatura_media <= 30){
        printf("Temperatura agradável\n");
    }
    else if(temperatura_media > 30){
        printf("Temperatura Quente\n");
    }
    else if (temperatura_media >= 0 && temperatura_media <=23)
    {
        printf("Temperatura Fria\n");
    }
    


}
questao010(){
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);

    if (numero%4 == 0 && numero%3 == 0)
    {
        printf("O número digitado é múltiplo tanto por 3 quanto por 4!\n");
        printf("O resultado da divisão de %i / 3 = %i\n", numero, numero / 3);
        printf("O resultado da divisão de %i / 4 = %i\n", numero, numero / 4);
    }
    

    else if (numero%4 == 0)
    {
        printf("O número digitado é múltiplo de 4!\n");
        printf("O resultado da divisão de %i / 4 = %i\n",numero, numero / 4);
    }
    else if (numero % 3 == 0 && numero % 5 == 0)
    {
        printf("O número digitado é múltiplo tanto por 3 quanto por 5!\n");
        printf("O resultado da divisão de %i / 3 = %i\n", numero, numero / 3);
        printf("O resultado da divisão de %i / 5 = %i\n", numero, numero / 5);

    }

    else if (numero%3 == 0)
    {
        printf("O número digitado é múltiplo de 3!\n");
        printf("O resultado da divisão de %i / 3 = %i\n",numero, numero / 3);
    }
    else if (numero%5 == 0)
    {
        printf("O número digitado é múltiplo de 5!\n");
        printf("O resultado da divisão de %i / 5 = %i\n",numero, numero / 5);
    }

    
    else{
        printf("O número digitado não é múltiplo de 3, 4 ou 5!\n");
    }
    
    
    
    
}

questao011(){
    int i, j, numero_linhas, numero_colunas;

    printf("Digite a quantidade de linhas que você vai querer em sua matriz: ");
    scanf("%i", &numero_linhas);

    printf("Digite a quantidade de colunas que você vai querer em sua matriz: ");
    scanf("%i", &numero_colunas);

    int matriz[numero_linhas][numero_colunas];
    printf("Digite abaixo os elementos de uma matriz do tipo %ix%i\n", numero_linhas, numero_colunas);

    for (i = 0; i < numero_linhas; i++)
    {
        for (j = 0; j < numero_colunas; j++)
        {
            scanf("%i", &matriz[i][j]);
        }
        
    }
    printf("Uma nova matriz do tipo %i x %i é gerada quando multiplicamos seus elementos por 2\n", numero_linhas, numero_colunas);
    for (i = 0; i < numero_linhas; i++)
    {
        for(j = 0; j < numero_colunas; j++){
            printf("|%4i ", matriz[i][j] * 2);
        }
        printf("|\n");
    }
    
    
}
questao012(){
    int i,j, matriz_um[3][3], matriz_dois[3][3];

    printf("Digite os 9 elementos da primeira matriz\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%i", &matriz_um[i][j]);
        }
    }

    printf("Digite os outros 9 elementos da segunda matriz\n");

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%i", &matriz_dois[i][j]);
        }
    }

    printf("A multiplicação da primeira matriz pela segunda gerará a seguinte matriz\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("|%4i ", matriz_um[i][j] * matriz_dois[j][i]);
        }
        printf("|\n");
    }
    

}
questao013(){
    int matriz_um[2][2], matriz_dois[2][2];

    printf("Digite os 4 elementos da primeira matriz\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%i", &matriz_um[i][j]);
        }
        
    }

    printf("Digite os 4  elementos da segunda matriz\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%i", &matriz_dois[i][j]);
        }
        
    }
    
    printf("A soma da primeira matriz pela segunda irá gerar a matriz abaixo\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("|%4i ", matriz_um[i][j] + matriz_dois[i][j]);
        }
        printf("|\n");
    }
    
}
int main () {
    
    questao013();

    return 0;
}