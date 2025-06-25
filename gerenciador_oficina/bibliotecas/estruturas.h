#ifndef _ESTRUTURAS_H
#define _ESTRUTURAS_H

typedef struct tp_endereco{
    char cep[10];
    char logradouro[100];
    char numero[10];
    char complemento[50];
    char bairro[50];
    char cidade[50];
    char estado[3]; 
}Endereco;

typedef struct tp_cliente{
    char nome[80];
    int idade;
    char cpf[12];
    char sexo[15];
    char estadoCivil[15];
    Endereco endereco;
    char telefone[12];
}Clientes;

typedef struct tp_carros{
    char placa[8];
    char marca[30];
    char modelo[25];
    int anoFrabricacaoModelo;
    char cor[30];
    char numeroChassi[18];
    char tipoCombustivel[15];
    char cpfPropietario[12];
}Carros;

typedef struct tp_OS{
    char numeroOS[10];      
    char dataAbertura[11]; 
    char status[20];        
    char cpfCliente[12];    
    char placaVeiculo[8];   
    int quilometragem;
    char descricaoServico[1000];
} OrdemServico;

typedef struct {
    char codigo[30];          
    char descricao[100];      
    char marcaFabricante[50]; 
    char aplicacao[100];      
    float precoCusto;
    float precoVenda;
    int quantidadeEstoque;
    char localizacao[80];
} Peca;

void impressaoDadosCliente();
void impressaoDadosCarro();
void impressaoDadosOS();
void impressaoDadosPecas();
int MenuSistema();
void arquivoCadastroClientes();
void ArquivoCadastroCarros();
void ArquivoCadastroOS();
void ArquivoCadastroPecas();
void gravacaoArquivoCliente(int);
void gravacaoArquivoCarros(int);
void gravacaoArquivoOS(int);
void gravacaoArquivoPecas(int);
void CadastrarClientes();
void CadastrarVeiculo();
void AbrirOS();
void CadastrarPecas();
int selecaoDeFuncao (int);
void impressaoDadosCliente();
void CadastrarClientes();
#endif