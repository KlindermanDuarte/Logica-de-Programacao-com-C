#include<stdio.h>
#include<math.h>

float coeficiente_a, coeficiente_b, coeficiente_c;

int solicitarCoeficientes(){
    printf("Digite o coeficiente \"a\": ");
    scanf("%f", &coeficiente_a);

    while(coeficiente_a == 0){
        printf("Não é equação de segundo grau\n");
        printf("Digite um coeficiente \"a\" válido: ");
        scanf("%f", &coeficiente_a);
    }

    printf("Digite o coeficiente \"b\": ");
    scanf("%f", &coeficiente_b);

    printf("Digite o coeficiente \"c\": ");
    scanf("%f", &coeficiente_c);

    return 0;
}

float calcularDelta(){
    return pow(coeficiente_b,2) - 4*coeficiente_a*coeficiente_c;
}

float calcularRaizeX1(){
    return (-coeficiente_b + sqrt(calcularDelta()))/2*coeficiente_a;
}

float calcularRaizX2(){
    return (-coeficiente_b - sqrt(calcularDelta()))/2*coeficiente_a;
}

int main(){
    
    solicitarCoeficientes();

    if(calcularDelta() < 0){
        printf("Não existe raiz nos números reais\n");
    }

    else if(calcularDelta() == 0){
        float raiz_x1 = calcularRaizeX1();
        printf("A raiz é igual a: %f\n", raiz_x1);
    }

    else if(calcularDelta() > 0){
        float raiz_x1 = calcularRaizeX1(), raiz_x2 = calcularRaizX2();
        printf("A raiz x1 é igual a: %f\n", raiz_x1);
        printf("A raiz x2 é igual a: %f\n", raiz_x2);
        
    }
    
    return 0;
}