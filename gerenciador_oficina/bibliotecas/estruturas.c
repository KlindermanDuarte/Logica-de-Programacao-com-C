#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "estruturas.h"

int numCad;
int contador;
char contadorImpressao[10000];
Clientes cadastroCliente[5];
Carros carros[5]; 
OrdemServico ordServico[5];
Peca pecas[5];
FILE *ArqCadastroClientes, *ArqCadastroCarro, *ArqCadastroOS, *ArqCadastroPecas;

void impressaoDadosCliente(){

    if (ArqCadastroClientes == NULL) {
        printf("Erro: Arquivo de cadastro de clientes não está aberto.\n");
        return;
    }

    rewind(ArqCadastroClientes); 

    
    while (fgets(contadorImpressao, sizeof(contadorImpressao), ArqCadastroClientes) != NULL) {
        printf("%s", contadorImpressao); 
    }

}

void impressaoDadosCarro(){

    if (ArqCadastroCarro == NULL) {
        printf("Erro: Arquivo de cadastro de carros não está aberto.\n");
        return;
    }

    rewind(ArqCadastroCarro); 

    
    while (fgets(contadorImpressao, sizeof(contadorImpressao), ArqCadastroCarro) != NULL) {
        printf("%s", contadorImpressao); 
    }

}

void impressaoDadosOS(){

    if (ArqCadastroOS == NULL) {
        printf("Erro: Arquivo de cadastro de OS não está aberto.\n");
        return;
    }

    rewind(ArqCadastroOS); 

    
    while (fgets(contadorImpressao, sizeof(contadorImpressao), ArqCadastroOS) != NULL) {
        printf("%s", contadorImpressao); 
    }

}

void impressaoDadosPecas(){

    if (ArqCadastroPecas == NULL) {
        printf("Erro: Arquivo de cadastro de clientes não está aberto.\n");
        return;
    }

    rewind(ArqCadastroPecas); 
    
    while (fgets(contadorImpressao, sizeof(contadorImpressao), ArqCadastroPecas) != NULL) {
        printf("%s", contadorImpressao); 
    }

}

int MenuSistema () {

    int opcaoEscolhida;

    printf("==================================================================================================\n");
    printf("|                                MENU                                                            |\n");
    printf("--------------------------------------------------------------------------------------------------\n");
    printf("|   1 - Cadastrar Cliente          |         2 - Abrir Ordem de Serviço                          |\n");
    printf("--------------------------------------------------------------------------------------------------\n");
    printf("|   3 - Cadastrar Veículo          |         4 - Cadastrar Peças                                 |\n");
    printf("--------------------------------------------------------------------------------------------------\n");
    printf("|                              5  - Sair                                                         |\n");
    printf("--------------------------------------------------------------------------------------------------\n");

    printf("Digite uma das opções acima: ");
    scanf("%i", &opcaoEscolhida);
    system("clear");
    return opcaoEscolhida;
}


void ArquivoCadastroClientes(){
    ArqCadastroClientes = fopen("./ArquivosTXT/CLIENTES.txt","w+");
    if (ArqCadastroClientes == NULL){
        printf("Erro ao gerar o arquivo de cadastro de clientes. Verifique o caminho do arquivo!\n");
    }
    else{
        printf("Arquivo gerado com sucesso!!!\n");
    }
    
}

void ArquivoCadastroCarros(){
    ArqCadastroCarro = fopen("./ArquivosTXT/CARROS.txt","w+");
    if (ArqCadastroCarro == NULL)
    {
        printf("Erro ao gerar o arquivo de cadastro de carros. Verifique o caminho do arquivo!\n");
    }
    else{
        printf("Arquivo para cadastramento de carros criado com sucesso!!\n");
    }
    
}

void ArquivoCadastroOS(){
    ArqCadastroOS = fopen("./ArquivosTXT/ORDEM_SERVICO.txt","w+");
    if (ArqCadastroOS == NULL)
    {
        printf("Erro ao gerar o arquivo de cadastro de OS. Verifique o caminho do arquivo!\n");
    }
    else{
        printf("Arquivo para cadastramento de OS criado com sucesso!!\n");
    }
    
}

void ArquivoCadastroPecas(){
    ArqCadastroPecas = fopen("./ArquivosTXT/PEÇAS.txt","w+");
    if (ArqCadastroPecas == NULL)
    {
        printf("Erro ao gerar o arquivo de cadastro de peças. Verifique o caminho do arquivo!\n");
    }
    else{
        printf("Arquivo para cadastramento de peças criado com sucesso!!\n");
    }
    
}

void gravacaoArquivoCliente(int contadorGravacaoCliente){
    fprintf(ArqCadastroClientes,"===============================================================\n");
    fprintf(ArqCadastroClientes,"|                      DADOS DO %iº CLIENTE                    |\n", contadorGravacaoCliente);
    fprintf(ArqCadastroClientes,"---------------------------------------------------------------\n");
    fprintf(ArqCadastroClientes,"| Nome Cliente::...........................................::%s|\n", cadastroCliente[contadorGravacaoCliente].nome);
    fprintf(ArqCadastroClientes,"| Idade::..................................................::%i|\n", cadastroCliente[contadorGravacaoCliente].idade);
    fprintf(ArqCadastroClientes,"| Estado Civil::...........................................::%s|\n", cadastroCliente[contadorGravacaoCliente].estadoCivil);
    fprintf(ArqCadastroClientes,"| CPF::....................................................::%s|\n", cadastroCliente[contadorGravacaoCliente].cpf);
    fprintf(ArqCadastroClientes,"| Telefone::...............................................::%s|\n", cadastroCliente[contadorGravacaoCliente].telefone);
    fprintf(ArqCadastroClientes,"| Sexo::...................................................::%s|\n", cadastroCliente[contadorGravacaoCliente].sexo);
    fprintf(ArqCadastroClientes,"===============================================================\n");
}

void gravacaoArquivoCarros(int contadorGravacaoCarros){
    fprintf(ArqCadastroCarro,"===============================================================\n");
    fprintf(ArqCadastroCarro,"|                      DADOS DO %iº CARRO                      |\n", contadorGravacaoCarros);
    fprintf(ArqCadastroCarro,"---------------------------------------------------------------\n");
    fprintf(ArqCadastroCarro,"| Placa::..................................................::%s|\n", carros[contadorGravacaoCarros].placa);
    fprintf(ArqCadastroCarro,"| Marca::..................................................::%s|\n", carros[contadorGravacaoCarros].marca);
    fprintf(ArqCadastroCarro,"| Modelo::.................................................::%s|\n", carros[contadorGravacaoCarros].modelo);
    fprintf(ArqCadastroCarro,"| Ano Fablicacão::.........................................::%i|\n", carros[contadorGravacaoCarros].anoFrabricacaoModelo);
    fprintf(ArqCadastroCarro,"| Chassi::.................................................::%s|\n", carros[contadorGravacaoCarros].numeroChassi);
    fprintf(ArqCadastroCarro,"| Combustível::............................................::%s|\n", carros[contadorGravacaoCarros].tipoCombustivel);
    fprintf(ArqCadastroCarro,"| CPF Proprietário::.......................................::%s|\n", carros[contadorGravacaoCarros].cpfPropietario);
    fprintf(ArqCadastroCarro,"===============================================================\n");
}

void gravacaoArquivoOS(int contadorGravacaoOS){
    fprintf(ArqCadastroOS,"===============================================================\n");
    fprintf(ArqCadastroOS,"|                      DADOS DA %iº OS                         |\n", contadorGravacaoOS + 1);
    fprintf(ArqCadastroOS,"---------------------------------------------------------------\n");
    fprintf(ArqCadastroOS,"| Número OS::..............................................::%s|\n", ordServico[contadorGravacaoOS].numeroOS);
    fprintf(ArqCadastroOS,"| Data abertura::..........................................::%s|\n", ordServico[contadorGravacaoOS].dataAbertura);
    fprintf(ArqCadastroOS,"| Status::.................................................::%s|\n", ordServico[contadorGravacaoOS].status);
    fprintf(ArqCadastroOS,"| CPF Cliente::............................................::%s|\n", ordServico[contadorGravacaoOS].cpfCliente);
    fprintf(ArqCadastroOS,"| Palca::..................................................::%s|\n", ordServico[contadorGravacaoOS].placaVeiculo);
    fprintf(ArqCadastroOS,"| Quilometragem::..........................................::%i|\n", ordServico[contadorGravacaoOS].quilometragem);
    fprintf(ArqCadastroOS,"| Descrição::..............................................::%s|\n", ordServico[contadorGravacaoOS].descricaoServico);
    fprintf(ArqCadastroOS,"===============================================================\n");
}

void gravacaoArquivoPecas(int contadorGravacaoPecas){
    fprintf(ArqCadastroPecas,"===============================================================\n");
    fprintf(ArqCadastroPecas,"|                      DADOS DA %iº OS                         |\n", contadorGravacaoPecas + 1);
    fprintf(ArqCadastroPecas,"---------------------------------------------------------------\n");
    fprintf(ArqCadastroPecas,"| Código::.................................................::%s|\n", pecas[contadorGravacaoPecas].codigo);
    fprintf(ArqCadastroPecas,"| Marca do Fabricante::....................................::%s|\n", pecas[contadorGravacaoPecas].marcaFabricante);
    fprintf(ArqCadastroPecas,"| Descrição::..............................................::%s|\n", pecas[contadorGravacaoPecas].descricao);
    fprintf(ArqCadastroPecas,"| Aplicação::..............................................::%s|\n", pecas[contadorGravacaoPecas].aplicacao);
    fprintf(ArqCadastroPecas,"| Preço de Custo::.........................................::%f|\n", pecas[contadorGravacaoPecas].precoCusto);
    fprintf(ArqCadastroPecas,"| Preço de Venda::.........................................::%f|\n", pecas[contadorGravacaoPecas].precoVenda);
    fprintf(ArqCadastroPecas,"| Quantidade Estoque::.....................................::%i|\n", pecas[contadorGravacaoPecas].quantidadeEstoque);
    fprintf(ArqCadastroPecas,"| Localização::............................................::%s|\n", pecas[contadorGravacaoPecas].localizacao);
    fprintf(ArqCadastroPecas,"===============================================================\n");
}

void CadastrarClientes(){

    ArquivoCadastroClientes();
    
    
    printf("Quantos clientes deseja cadastrar?\n");
    scanf("%i", &numCad);
    while (getchar() != '\n' && getchar() != EOF);

    while (numCad < 0 || numCad > 5)
    {
        printf("Infelizmente é possível cadastrar até 5 clientes por vez. Digite a quantidade que deseja cadastrar: ");
        scanf("%i", &numCad);
        while (getchar() != '\n' && getchar() != EOF);
    }
    system("clear");
    for(contador = 1; contador <= numCad; contador++){
        
        printf("DADOS DO %iº CLIENTE\n", contador);
        printf("Digite o nome completo do cliente: ");
        fgets(cadastroCliente[contador].nome, sizeof(cadastroCliente[contador].nome), stdin);
        cadastroCliente[contador].nome[strcspn(cadastroCliente[contador].nome, "\n")] = 0;

        printf("Digite a idade: ");
        scanf("%i", &cadastroCliente[contador].idade);
        while (getchar() != '\n' && getchar() != EOF); 

        printf("Digite o sexo do cliente: ");
        fgets(cadastroCliente[contador].sexo, sizeof(cadastroCliente[contador].sexo), stdin);
        cadastroCliente[contador].sexo[strcspn(cadastroCliente[contador].sexo, "\n")] = 0;

        printf("Digite o estado civil do cliente: ");
        fgets(cadastroCliente[contador].estadoCivil, sizeof(cadastroCliente[contador].estadoCivil), stdin);
        cadastroCliente[contador].estadoCivil[strcspn(cadastroCliente[contador].estadoCivil, "\n")] = 0;

        printf("Digite o CPF: ");
        scanf("%s", cadastroCliente[contador].cpf);
        while (getchar() != '\n' && getchar() != EOF);

        printf("Digite o telefone para contato: ");
        scanf("%s", cadastroCliente[contador].telefone);
        while (getchar() != '\n' && getchar() != EOF);

        printf("\n");
        gravacaoArquivoCliente(contador);
        printf("Cadastro %iº cliente realizado\n\n", contador);
        
    }
    impressaoDadosCliente();
    fclose(ArqCadastroClientes);
    
}

void CadastrarVeiculo(){
    ArquivoCadastroCarros();

    printf("Quantos carros deseja cadastrar?\n");
    scanf("%i", &numCad);
    
    while (getchar() != '\n' && getchar() != EOF); 
    

    
    while (numCad <= 0 || numCad > 5) {
        printf("Quantidade invalida. Digite um numero entre 1 e 5: ");
        scanf("%i", &numCad);
        while (getchar() != '\n' && getchar() != EOF); 
    }
    system("clear"); 

    for (contador = 0; contador < numCad; contador++)
    {   
        printf("DADOS DO %iº CARRO\n", contador + 1);
        printf("Digite a placa do carro: ");
        scanf("%s", carros[contador].placa);
        while (getchar() != '\n' && getchar() != EOF);

        printf("Digite o nome da marca: ");
        fgets(carros[contador].marca,sizeof(carros[contador].marca), stdin);
        carros[contador].marca[strcspn(carros[contador].marca, "\n")] = 0; 

        printf("Digite o modelo do carro: ");
        scanf("%s", carros[contador].modelo); 
        
        while (getchar() != '\n' && getchar() != EOF); 
        

        printf("Digite o ano de fabricacao: ");
        scanf("%i", &carros[contador].anoFrabricacaoModelo); 
        
        while (getchar() != '\n' && getchar() != EOF); 
        

        printf("Nos informe a cor do carro: ");
        fgets(carros[contador].cor,sizeof(carros[contador].cor),stdin);
        carros[contador].cor[strcspn(carros[contador].cor, "\n")] = 0; 

        printf("Digite o numero do chassi: ");
        scanf("%s", carros[contador].numeroChassi); 
        
        while (getchar() != '\n' && getchar() != EOF); 
        

        printf("Qual o tipo de combustivel consumido pelo carro: ");
        fgets(carros[contador].tipoCombustivel, sizeof(carros[contador].tipoCombustivel), stdin);
        carros[contador].tipoCombustivel[strcspn(carros[contador].tipoCombustivel, "\n")] = 0; 

        printf("Digite o CPF do proprietario: ");
        fgets(carros[contador].cpfPropietario, sizeof(carros[contador].cpfPropietario),stdin);
        carros[contador].cpfPropietario[strcspn(carros[contador].cpfPropietario, "\n")] = 0; 

        gravacaoArquivoCarros(contador);
        printf("\n");
    }

    impressaoDadosCarro();
    fclose(ArqCadastroCarro);
    
}


void AbrirOS(){
   
   ArquivoCadastroOS();
   printf("Quantas OS's deseja cadastrar?\n");
   scanf("%i", &numCad);
    
    while (getchar() != '\n' && getchar() != EOF); 
    

    
    while (numCad <= 0 || numCad > 5) {
        printf("Quantidade invalida. Digite um numero entre 1 e 5: ");
        scanf("%i", &numCad);
        while (getchar() != '\n' && getchar() != EOF); 
    }
    system("clear");

    for ( contador = 0; contador < numCad; contador++)
    {
        printf("DADOS DA %iª OS\n", contador + 1);
        printf("Digite a OS desejada: ");
        scanf("%s", ordServico[contador].numeroOS);

        printf("Digite a data de abertura da OS: ");
        scanf("%s", ordServico[contador].dataAbertura);

        printf("Digite o status da OS: ");
        scanf("%s", ordServico[contador].status);

        printf("Digite o CPF do cliente: ");
        scanf("%s", ordServico[contador].cpfCliente);

        printf("Nos informe a placa do veículo: ");
        scanf("%s", ordServico[contador].placaVeiculo);

        printf("Quilometragem: ");
        scanf("%i", &ordServico[contador].quilometragem);       
        while (getchar() != '\n' && getchar() != EOF);

        printf("Nos informe com breves palavras qual o problema com o veículo?\n");
        fgets(ordServico[contador].descricaoServico,sizeof(ordServico[contador].descricaoServico),stdin);


        gravacaoArquivoOS(contador);
        printf("\n");


    }
    impressaoDadosOS();
    fclose(ArqCadastroOS);
   
}



void CadastrarPecas(){
   ArquivoCadastroPecas();
   printf("Quantas peças deseja cadastrar?\n");
   scanf("%i", &numCad);
    
    while (getchar() != '\n' && getchar() != EOF); 
    

    
    while (numCad <= 0 || numCad > 5) {
        printf("Quantidade invalida. Digite um numero entre 1 e 5: ");
        scanf("%i", &numCad);
        while (getchar() != '\n' && getchar() != EOF); 
    }
    system("clear");

    for ( contador = 0; contador < numCad; contador++)
    {
        printf("DADOS DA %iª PEÇA\n", contador + 1);
        printf("Digite o código da peça: ");
        scanf("%s", pecas[contador].codigo);

        printf("Nos informe a marca da peça: ");
        scanf("%s", pecas[contador].marcaFabricante);
        while (getchar() != '\n' && getchar() != EOF);

        printf("Nos dê uma breve descrição da peça: ");
        fgets(pecas[contador].descricao,sizeof(pecas[contador].descricao),stdin);

        printf("Quais carros essa peça é compatível?\n");
        scanf("%s", pecas[contador].aplicacao);
        while (getchar() != '\n' && getchar() != EOF);

        printf("Nos informe o preço de custo: ");
        scanf("%f", &pecas[contador].precoCusto);

        printf("Qual o preço de venda: ");
        scanf("%f", &pecas[contador].precoVenda);       
        while (getchar() != '\n' && getchar() != EOF);

        printf("Nos informe com breves palavras qual a localização da peça no estoque?\n");
        fgets(pecas[contador].localizacao,sizeof(pecas[contador].localizacao),stdin);

        printf("Qual a quantidade em estoque: ");
        scanf("%i", &pecas[contador].quantidadeEstoque); 


        gravacaoArquivoPecas(contador);
        printf("\n");

    }
    impressaoDadosPecas();
    fclose(ArqCadastroPecas);
}

int selecaoDeFuncao (int opcaoFuncao){
    switch(opcaoFuncao){

        case 1:
            CadastrarClientes();
            break;
        
        case 2:
            AbrirOS();
            break;
        
        case 3:
            CadastrarVeiculo();
            break;
        
        case 4:
            CadastrarPecas();
            break;
        
        case 5:
            printf("Finalizando software...Saindo do sitema.\n\n");
            break;
    }

    return opcaoFuncao;
}