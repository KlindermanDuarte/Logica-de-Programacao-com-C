#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int op, valor;

void MontarMenuMatriz() {

    valor=1;
    int matriz[3][5], i, j;
    for(i=0; i<3; i++) {
        for(j=0; j<5; j++)
            matriz[i][j]=valor++;
    }
    printf("=========================\n");
    printf("|   MENU DE QUESTÕES     |\n");
    printf("|------------------------|\n");
    for(i=0; i<3; i++) {
        for(j=0; j<5; j++)
            printf("|%4i",matriz[i][j]);
        printf("|\n");
    }
    printf("|------------------------|\n");
}
void Questao001() {
    float salario_minimo, valor_energia, valor_unitario_kw;
    int quilowatts;

    printf("==============================================\n");
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite a quantidade de quilowatts consumidos: ");
    scanf("%i", &quilowatts);
    printf("\n============================================\n");
    

    valor_unitario_kw = (salario_minimo * 1/7)/100;
    
    
    printf("Valor unitário quilowatts::...........::R$%.2f\n", valor_unitario_kw);

    valor_energia = valor_unitario_kw * quilowatts;

    printf("Valor da energia::....................::R$%.2f\n", valor_energia);
    
    printf("Valor da energia com desconto::.......::R$%.2f\n", valor_energia - valor_energia*10/100);

}
void Questao002() {
    int numeroCDU = 123; 
    int unidade, dezena, centena;
    int numeroUDC;

    printf("Digite um número inteiro de 3 dígitos: ");
    scanf("%i", &numeroCDU);
    
    unidade = numeroCDU % 10;
    
    
    dezena = (numeroCDU / 10) % 10; 
    centena = numeroCDU / 100;

    numeroUDC = (unidade * 100) + (dezena * 10) + centena;

    printf("O número no formato CDU é: %d\n", numeroCDU);
    printf("O número no formato UDC é: %d\n", numeroUDC);

}
void Questao003() {

    int codigo, quantidade_produto;

    printf("===================================================\n");
    printf("|    LANCHONETE - LANCHEBEM                       |\n");
    printf("---------------------------------------------------\n");
    printf("|    Especificação     |    Código   |   Preço    |\n");
    printf("---------------------------------------------------\n");
    printf("|    Cachorro Quente   |    100      |    4,2     |\n");
    printf("---------------------------------------------------\n");
    printf("|    Bauru Simples     |    101      |    3,3     |\n");
    printf("---------------------------------------------------\n");
    printf("|    Bauru com ovo     |    102      |    5,5     |\n");
    printf("---------------------------------------------------\n");
    printf("|    Hambúrguer        |    103      |    6,2     |\n");
    printf("---------------------------------------------------\n");
    printf("|    Cheeseburguer     |    104      |    5,3     |\n");
    printf("---------------------------------------------------\n");
    printf("|    Refrigerante      |    105      |    4,5     |\n");
    printf("===================================================\n");
    
    printf("Digite o código do produto que você vai querer: ");
    scanf("%i", &codigo);
    printf("Digite a quantidade do produto que você vai querer: ");
    scanf("%i", &quantidade_produto);
    
    switch(codigo){
    
        case 100:
            printf("Especificação::...............::Cachorro Quente\n");
            printf("Código::......................::100\n");
            printf("Valor Total::.................::R$%.2f\n", quantidade_produto * 4.2);
            break;
        
        case 101:
            printf("Especificação::...............::Bauru Simples\n");
            printf("Código::......................::101\n");
            printf("Valor Total::.................::R$%.2f\n", quantidade_produto * 3.3);
            break;
        
        case 102:
            printf("Especificação::...............::Bauru com ovo\n");
            printf("Código::......................::102\n");
            printf("Valor Total::.................::R$%.2f\n", quantidade_produto * 5.5);
            break;
        
        case 103:
            printf("Especificação::...............::Hambúrguer\n");
            printf("Código::......................::103\n");
            printf("Valor Total::.................::R$%.2f\n", quantidade_produto * 6.2);
            break;  
        
        case 104:
            printf("Especificação::...............::Cheeseburguer\n");
            printf("Código::......................::104\n");
            printf("Valor Total::.................::R$%.2f\n", quantidade_produto * 5.3);
            break;
        
        case 105:
            printf("Especificação::...............::Refrigerante\n");
            printf("Código::......................::105\n");
            printf("Valor Total::.................::R$%.2f\n", quantidade_produto * 4.5);
            break;        
    }
}
void Questao004() {
    char sexo;
    float altura;
    
    printf("Qual o seu sexo?\n");
    scanf("%s", &sexo);

    while (sexo != 'F' && sexo != 'f' && sexo != 'M' && sexo != 'm')
    {
        
        printf("Digite uma opção válida. F - Feminino ou M - Masculino: ");
        scanf("%c", &sexo);
        
    }
    
    
    printf("Qual a sua altura?\n");
    scanf("%f", &altura);
    
    if(sexo == 'M' || sexo == 'm'){
        float peso_masculino = (72.7 * altura) - 58;
        printf("Seu peso ideal é %.2f Kg\n", peso_masculino);
    }
    else if(sexo == 'f' || sexo == 'F'){
        float peso_feminino = (62.1 * altura) - 44.7;
        printf("Seu peso ideal é %.2f Kg\n", peso_feminino);
    }
}
void Questao005() {
    float saldo_medio;
    printf("Digite o valor do seu saldo médio: \n");
    scanf("%f", &saldo_medio);
    
    if(saldo_medio >= 0 && saldo_medio <= 200){
        printf("Infelizmente você não possui nenhum crédito!!\n");
    }
    
    else if(saldo_medio >= 201 && saldo_medio <= 400){
        printf("Seu percentual de crédito será de 20 por cento sobre o valor do saldo médio\n");
        printf("Saldo médio::...................::%.2f\n", saldo_medio);
        printf("Crédito liberado::..............::%.2f\n", saldo_medio * 20/100);
    }
    
    else if(saldo_medio >= 401 && saldo_medio <= 600){
        printf("Seu percentual de crédito será de 30 por cento sobre o valor do saldo médio\n");
        printf("Saldo médio::...................::%.2f\n", saldo_medio);
        printf("Crédito liberado::..............::%.2f\n", saldo_medio * 30/100);
    }
    
    else if(saldo_medio >= 601){
        printf("Seu percentual de crédito será de 40 por cento sobre o valor do saldo médio\n");
        printf("Saldo médio::...................::%.2f\n", saldo_medio);
        printf("Crédito liberado::..............::%.2f\n", saldo_medio * 40/100);
    }
}
void Questao006() {
    int operacao;
    float numero_um, numero_dois, resultado;
    printf("_________________________________________________________\n");
    printf("|                   Calculadora Simples                 |\n");
    printf("=========================================================\n");
    printf("| 1 - SOMAR                  |   2 - SUBTRAIR           |\n");
    printf("=========================================================\n");
    printf("| 3 - MULTIPLICAR            |   4 - DIVIDIR            |\n");
    printf("=========================================================\n");
    printf("|                      5 - FINALIZAR OPERAÇÃO           |\n");
    printf("=========================================================\n");

    printf("Digite uma das opções de operação: ");
    scanf("%i", &operacao);

    switch (operacao){

    case 1:
        printf("Digite o primeiro número: ");
        scanf("%f", &numero_um);
        printf("\nDigite o segundo número: ");
        scanf("%f", &numero_dois);
        resultado = numero_um + numero_dois;
        printf("O resultado da soma de %.2f + %.2f = %.2f\n", numero_um, numero_dois, resultado);
        break;
    
    case 2:
        printf("Digite o primeiro número: ");
        scanf("%f", &numero_um);
        printf("\nDigite o segundo número: ");
        scanf("%f", &numero_dois);
        resultado = numero_um - numero_dois;
        printf("O resultado da subtração de %.2f - %.2f = %.2f\n", numero_um, numero_dois, resultado);
        break;
    
    case 3:
        printf("Digite o primeiro número: ");
        scanf("%f", &numero_um);
        printf("\nDigite o segundo número: ");
        scanf("%f", &numero_dois);
        resultado = numero_um * numero_dois;
        printf("O resultado da multiplicação de %.2f x %.2f = %.2f\n", numero_um, numero_dois, resultado);
        break;


    case 4:
        printf("Digite o primeiro número: ");
        scanf("%f", &numero_um);
        printf("\nDigite o segundo número: ");
        scanf("%f", &numero_dois);
        if (numero_dois == 0) {
            printf("Erro: Divisão por zero!\n");
            return 0; 
        }
        resultado = numero_um / numero_dois;
        printf("O resultado da divisão de %.2f / %.2f = %.2f\n", numero_um, numero_dois, resultado);
        break;

    case 5:
        printf("Programa finalizado com sucesso!!\n");
        exit(0);
        break;
    }
}
void Questao007() {
    int idade_em_anos;

    printf("Digite sua idade: ");
    scanf("%i", &idade_em_anos);

    idade_em_anos = idade_em_anos * 365;
    printf("Sua idade em dias é igual a %i\n", idade_em_anos);
    if(idade_em_anos < 6570){
        printf("Você é menor de idade\n");
    }
    else{
        printf("Você é maior de idade\n");
    }
}
void Questao008() {
    char clima[20]; 

    printf("Como está o tempo hoje (nublado, ensolarado ou chuvoso)? ");
    scanf("%s", clima);

   
    if (strcmp(clima, "ensolarado") == 0) {
        printf("Temperatura Quente\n");
    } 
    else if (strcmp(clima, "nublado") == 0) {
        printf("Temperatura agradável\n");
    } 
    else if (strcmp(clima, "chuvoso") == 0) {
        printf("Temperatura Fria\n");
    } 
    else {
        printf("Entrada inválida. Por favor, digite 'nublado', 'ensolarado' ou 'chuvoso'.\n");
    }
}
void Questao009() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%i", &numero);
    printf("Sucessor::..................::%i\n", numero + 1);
    printf("Antecessor::................::%i\n", numero - 1);
}
void Questao010() {
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
void Questao011() {
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
void Questao012() {
    int i,j, matriz_um[3][3], matriz_dois[3][3], matriz_resultado[3][3];

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

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matriz_resultado[i][j] = 0;
        }
    }

    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            for (int k = 0; k < 3; k++) { 
                matriz_resultado[i][j] += matriz_um[i][k] * matriz_dois[k][j];
            }
        }
    }
    printf("A multiplicação da primeira matriz pela segunda gerará a seguinte matriz\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("|%4i ", matriz_resultado[i][j]);
        }
        printf("|\n");
    }
}
void Questao013() {
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
void Questao014() {
    int numero_linhas, numero_colunas, soma_diagonal_principal = 0;
    printf("Informe uma matriz quadrada\n");
    printf("A quantidade de linhas deve ser a mesma quantidade de colunas\n");
    printf("Ex: 2x2, 3x3,...\n");
    
    printf("Digite um número para a matriz quadrada: ");
    scanf("%i", &numero_linhas);
    
    numero_colunas = numero_linhas;
    int matriz[numero_linhas][numero_colunas];
    printf("Digite os %i elementos da matriz quadrada\n", numero_linhas * numero_colunas);
    for(int i = 0; i < numero_linhas; i++){
        for(int j = 0; j < numero_colunas; j++){
            scanf("%i", &matriz[i][j]);
            if(i == j){
                soma_diagonal_principal += matriz[i][j];
            }
        }
    }
    printf("Abaixo está a matriz digitada\n");
    for(int i = 0; i < numero_linhas; i++){
       for(int j = 0; j < numero_colunas; j++){
           printf("|%4i ", matriz[i][j]);
       }
       printf("|\n");
    }
    printf("A soma dos elementos da diagonal principal\n");
    for(int i = 0; i < numero_linhas; i++){
        for(int j = 0; j < numero_colunas; j++){
            if(i == j){
                printf("%i, ", matriz[i][j]);
            }
        }
    }
    printf("é igual á %i\n", soma_diagonal_principal);
    
}
void Questao015() {
    
    int matriz[3][3];
    int i, j; 

    printf("Digite os 9 elementos da matriz 3x3\n");

    for(i = 0; i < 3; i++){
        for ( j = 0; j < 3; j++)
        {
            scanf("%i", &matriz[i][j]);
        } 
    }

    
    float divisor;

    printf("Digite o número ao qual você deseja que a matriz seja dividida: ");
    scanf("%f", &divisor);


    printf("Matriz Original:\n");
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            printf("|%4d ", matriz[i][j]);
        }
        printf("|\n");
    }

    printf("\nDividindo todos os elementos por: %.2f\n", divisor);
    float matrizDividida[3][3];
    
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            matrizDividida[i][j] = (float)matriz[i][j] / divisor; 
        }
    }

    printf("\nMatriz Resultante (após divisão):\n");
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < 3; j++) { 
            
            printf("|%6.2f ", matrizDividida[i][j]); 
        }
        printf("|\n");
    }
}

void opcoesMenu() {

    int op2;

    printf("Digite uma das opções acima: ");
    scanf("%i", &op2);

    switch(op2) {
    case 1:
        Questao001();
        break;
    case 2:
        Questao002();
        break;
    case 3:
        Questao003();
        break;
    case 4:
        Questao004();
        break;
    case 5:
        Questao005();
        break;
    case 6:
        Questao006();
        break;
    case 7:
        Questao007();
        break;
    case 8:
        Questao008();
        break;
    case 9:
        Questao009();
        break;
    case 10:
        Questao010();
        break;
    case 11:
        Questao011();
        break;
    case 12:
        Questao012();
        break;
    case 13:
        Questao013();
        break;
    case 14:
        Questao014();
        break;
    case 15:
        Questao015();
        break;
    default:
        printf("Opção inválida!!\n");
        break;
    }
}
int main() {
    setlocale(LC_ALL, "Portuguese");
    do {
        MontarMenuMatriz();
        opcoesMenu();
        printf("Deseja executar qual questão?Digite qualquer numero para continuar ou zero p/sair\n");
        scanf("%i",&op);
    } while(op!=0);

    return 0;
}