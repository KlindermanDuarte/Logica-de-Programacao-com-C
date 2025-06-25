#include <stdio.h>
#include "biblicalcfatorial.h"

int CalcularFatorial(int numero_digitado_usuario_2){
    int contador_para, resultado_fatorial = 1;

    if(numero_digitado_usuario_2 == 0){
        printf("\nO valor do fatorial de 0 é 1.");
    }

    else{
        for(contador_para = 1; contador_para <= numero_digitado_usuario_2; contador_para++){
        resultado_fatorial *= contador_para;
        }
    }    
    return resultado_fatorial;
}
