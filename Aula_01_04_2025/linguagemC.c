#include <stdio.h>
#include <stdlib.h>

/*Implemente um algoritmo que represente seus dados academicos, imprima todas as entradas
*(matrícula, nome completo, curso, disciplina, instituição, período, ano de ingresso)
*/
int matricula(){
    int matriculaAluno;
    printf("Digite sua matrícula: ");
    scanf("%i", &matriculaAluno);
    while(getchar() != "\n");
    return matriculaAluno;
}

char nomeCompleto(){
    char nomeAluno[80];
    printf("Digite seu nome completo: ");
    fgets(nomeAluno, sizeof(nomeAluno), stdin);
   
    return nomeAluno[80];
}
char curso(){
    char cursoAluno[100];
    printf("Digite o curso ao qual você está fazendo: ");
    fgets(cursoAluno, sizeof(cursoAluno), stdin);
    return cursoAluno[100];
}

char disciplina(){
    char disciplinaCurso[50];
    printf("Digite o nime da disciplina ao qual você está fazendo: ");
    fgets(disciplinaCurso, sizeof(disciplinaCurso), stdin);
    return disciplinaCurso[50];
}
char instituicao(){
    char faculdade[60];
    printf("Digite o nome da instituição que você estuda: ");
    fgets(faculdade, sizeof(faculdade), stdin);
    return faculdade[60];
}
int periodo(){
    int periodoAluno;
    printf("Digite o período que você esta: ");
    scanf("%i", &periodoAluno);
    return periodoAluno;
}
int ingresso(){
    int anoIngresso;
    printf("Digite o ano ao qual você entrou na faculdade: ");
    scanf("%i", &anoIngresso);
    return anoIngresso;
}



main(){
   int _matriculaAluno;
   char _nomeAluno[80];
   char _cursoAluno[100];
   char _disciplinaAluno[50];
   char _instituicaoFaculdade[60];
   int _periodoAluno;
   int _anoIngresso;

   _matriculaAluno = matricula();
   _nomeAluno[80] = nomeCompleto();
   _cursoAluno[100] = curso();
   _disciplinaAluno[50] = disciplina();
   _instituicaoFaculdade[60] = instituicao();
   _periodoAluno = periodo();
   _anoIngresso = ingresso();

   printf(_matriculaAluno);
}