#include <stdio.h>
#include <stdlib.h>
#include "cursodescricao.h"
#include "descricaounidade.h"



/*
O tipo FILE é utlizado para criar arquivos.
Este arquivo deve ser alocado em memória, portanto, sua
criação deve ser feita como ponteiro#include <stdio.h>
#include <stdlib.h>
#include "operacao.h"
*/
void gravar(){

    
    FILE *arquivo;

    //A função fopen é reponsável por criar um arquivo
    //Este arquivo fica disponível em memória até o fechamento
    arquivo = fopen("dados.txt","w");

    //Verificar se o arquivo existe. Se ele não existe, então
    //exibir a mensagem de arquivo não encontrado e sair da 
    //execução do programa

    if(arquivo==NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1); //encerrar o programa


}

    curso cur, *pcur; //Criar um ponteiro para a variavel "curso" (dados_do_curso)
    endereco end,*pend;//Criar um ponteiro para a variavel "endereço" (endereço_do_curço)

    pcur = &cur;
    pend = &end;

    /*Aqui é a parte do código onde o usúario irá se comunicar
    com o software. Neles nós adicionamos fgets para utilizar nome compostos e os ponteiros
    apontando para cada variavel. Após o usuário digitar os dados, será gravado no arquivo dados.txt*/ 
    printf("Adicione o nome do Curso:\n");
    fgets(pcur->nomedocurso,15,stdin);

    printf("Adicione a carga horária do curso:\n");
    fgets(pcur->cargahoraria,20,stdin);

    printf("Adicione a data do inicio do curso:\n");
    fgets(pcur->datadoinicio,20,stdin);

    printf("Adicione a data de termino do custo:\n");
    fgets(pcur->datadotermino,20,stdin);

    printf("Adicione a unidade do curso:\n");
    fgets(pend->localizacao,50,stdin);

    printf("Adicione os horários de funcionamento:\n");
    fgets(pend->horafuncionamento,50,stdin);

    printf("Adicione o telefone da unidade:\n");   
    fgets(pend->telefone,15,stdin);
  
    //gravar o nome no arquivo
    fprintf(arquivo,pcur->nomedocurso);
    fprintf(arquivo,pcur->cargahoraria);
    fprintf(arquivo,pcur->datadoinicio);
    fprintf(arquivo,pcur->datadotermino);
    fprintf(arquivo,pend->localizacao);
    fprintf(arquivo,pend->horafuncionamento);
    fprintf(arquivo,pend->telefone);
    
    //tirar o arquivo da memória. Fechar o arquivo
    fclose(arquivo);


}