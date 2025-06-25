#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bibliotecas/estruturas.h"

int main () {
    int opcaoDeContinuidade, selecaoDeFuncao_var;

    do{

        selecaoDeFuncao_var = selecaoDeFuncao(MenuSistema());
        if (selecaoDeFuncao_var == 5)
        {
            opcaoDeContinuidade = 0;
        }
        else{
            printf("Deseja escolher uma nova opção? 1 - sim ou 0 - não\n");
            scanf("%i", &opcaoDeContinuidade);
        }
        
    }while(opcaoDeContinuidade != 0);

    return 0;

}