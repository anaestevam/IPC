#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#include "C:\Users\anaes\OneDrive\Área de Trabalho\CODEBLOCKS\BibliotecaSupermercado.h"
#define TAM 40
typedef struct endereco seu;
struct endereco {
    char rua[TAM];
    char cidade[TAM];
};
typedef struct Dados cli;
struct Dados{
    char nome[20];
    int idade;
    int qtde[1][150];
    float valor[150];
    struct endereco seu;
};
void Inserir();
void clientela();
void pesquisaNome();
void pesquisaIdade();
void pesquisaCidade();
void excluir();
int main(){
        setlocale(LC_ALL, "Portuguese"); //identificar caracter especial

    int opcao, op;
    opcao=Menu(opcao);
    fflush(stdin);

        while(opcao!=7){

        switch(opcao){

                 case 1:
                        Inserir();

                     printf("\n\n\tDESEJA RETORNAR AO MENU?\n\t 1-SIM 2-NÃO : ");
                     scanf("%d", &op);
                     system("cls");
                     if(op==1){
                        opcao = Menu(opcao);
                     }else if(op==2){
                         printf("VOLTE SEMPRE!!");
                         exit(1);
                     }
                    break;

                 case 2:
                        clientela();
                     printf("\n\n\tDESEJA RETORNAR AO MENU?\n\t 1-SIM 2-NÃO : ");
                     scanf("%d", &op);
                     system("cls");
                     if(op==1){
                        opcao = Menu(opcao);
                     }else if(op==2){
                         printf("VOLTE SEMPRE!!");
                         exit(1);
                     }
                    break;

                 case 3:
                      pesquisaIdade();
                     printf("\n\n\tDESEJA RETORNAR AO MENU?\n\t 1-SIM 2-NÃO : ");
                     scanf("%d", &op);
                     system("cls");
                     if(op==1){
                        opcao = Menu(opcao);
                     }else if(op==2){
                         printf("VOLTE SEMPRE!!");
                         exit(1);
                     }
                    break;
                 case 4:
                     pesquisarNome();

                     printf("\n\n\tDESEJA RETORNAR AO MENU?\n\t 1-SIM 2-NÃO : ");
                     scanf("%d", &op);
                     system("cls");
                     if(op==1){
                        opcao = Menu(opcao);
                     }else if(op==2){
                         printf("VOLTE SEMPRE!!");
                         exit(1);
                     }
                    break;
                 case 5:
                     pesquisaCidade();

                     printf("\n\n\tDESEJA RETORNAR AO MENU?\n\t 1-SIM 2-NÃO : ");
                     scanf("%d", &op);
                     system("cls");
                     if(op==1){
                        opcao = Menu(opcao);
                     }else if(op==2){
                         printf("VOLTE SEMPRE!!");
                         exit(1);
                     }
                    break;
                 case 6:
                     excluir();
                     printf("\n\n\tDESEJA RETORNAR AO MENU?\n\t 1-SIM 2-NÃO : ");
                     scanf("%d", &op);
                     system("cls");
                     if(op==1){
                        opcao = Menu(opcao);
                     }else if(op==2){
                         printf("VOLTE SEMPRE!!");
                         exit(1);
                     }
                    break;
                 default:
                    printf("Opção inválida!\n");
                    getch();
                    break;
        }
    }
        return 0;
}
void Inserir(){
                FILE* arq;
                struct Dados cli;
                struct endereco seu;
                arq = fopen("supermercado.txt","wb");

                if(arq==NULL){
                    printf("Erro na abertura do arquivo!");
                    exit(1);
                }else{
                    system("cls");
                    cabecalho();
                    printf("\n\n\t#Cadastrar Cliente#");

                    int A, cont=0, x, j, l;
                    float total;
                    total=0;
                    printf("\nDigite nome: ");
                    fgets(cli.nome,20,stdin);
                    fflush(stdin);
                    printf("\nDigite idade: ");
                    scanf("%d", &cli.idade);
                    fflush(stdin);
                    printf("\nDigite Logradouro: ");
                    fgets(cli.seu.rua,50, stdin);
                    fflush(stdin);
                    printf("\nDigite Cidade: ");
                    fgets(cli.seu.cidade,50, stdin);
                    fflush(stdin);
                    printf("\nDigite quantidade de produtos no total: ");
                    scanf("%d", &A);

                    for(x=0;x<A;x++){
                             printf("\nDigite o preço do produto %d:\t",x+1);
                             scanf("%f",&cli.valor[x]);

                       for(j=0;j<1;j++,l++){
                                        printf("\nDigite a quantidade do produto %d:\t",x+1);
                                        scanf("%d", &cli.qtde[x][j]);
                                        total=total+(cli.valor[x]*cli.qtde[x][j]);

                        }
                    }
                    cont++;
                    fflush(stdin);

                    fwrite(&cli,sizeof(struct Dados), 1, arq);
                    fclose(arq);

                    arq = fopen("supermercado.txt", "rb");
                    fread(&cli,sizeof(struct Dados), 1, arq);

                    printf("\n\n\n\t**DADOS DO CLIENTE**");
                    printf("\n\nCliente : %s",cli.nome);
                    fflush(stdin);
                    printf("\nIdade : %d", cli.idade);
                    fflush(stdin);
                    printf("\n\nLogradouro : %s", cli.seu.rua);
                    fflush(stdin);
                    printf("\nCidade : %s" , cli.seu.cidade);
                    fflush(stdin);
                    printf("\nTotal a pagar: R$ %.2f", total);
                    fclose(arq);
                    }
}
void clientela(){
            int i, cont=0, t;
            float total[150];
            struct Dados cli;
            struct endereco seu;
            FILE *arq;

            arq = fopen("supermercado.txt","rb");
            system("cls");
            cabecalho();
            if(arq==NULL){
                    printf("Erro na abertura do arquivo!");
                    exit(1);
            }else{

                    while(fread(&cli,sizeof(struct Dados), 1, arq)==1){

                        printf("\n\n\t#Clientela#");
                        printf("\n\nNome: %s\n", cli.nome);
                        fflush(stdin);
                        printf("\nIdade: %d\n", cli.idade);
                        fflush(stdin);
                        printf("\nLogradouro: %s", cli.seu.rua);
                        fflush(stdin);
                        printf("\nCidade: %s\n", cli.seu.cidade);
                        linha();printf("\n");
                    }
               }
            fclose(arq);
            getch();
}
void pesquisarNome(){
            FILE *arq;
           struct Dados cli;
           struct endereco seu;
            char buscaNome[20];
            arq = fopen("supermercado.txt","rb");
            system("cls");
            cabecalho();
            if(arq==NULL){
                    printf("Erro na abertura do arquivo!");
                    exit(1);
            }else{
                    printf("\n\n#Busca por nome#");
                    fflush(stdin);
                    printf("\n\nDigite a nome que quer buscar: ");
                    fgets(buscaNome,20,stdin);

                    while(fread (&cli,sizeof(struct Dados), 1, arq)==1){
                    if(strcmp(buscaNome,cli.nome)==0){
                     printf("\n\n REGISTRO DA BUSCA");
                     fflush(stdin);
                     printf("\nCliente : %s",cli.nome);
                     fflush(stdin);
                     printf("\nIdade : %d", cli.idade);
                     fflush(stdin);
                     printf("\n\nLogradouro : %s", cli.seu.rua);
                     fflush(stdin);
                     printf("\n\nCidade: %s" , cli.seu.cidade);
                     fflush(stdin);

                     }
                     }
                    }

                    fclose(arq);
                    getch();

}
void pesquisaIdade(){
            FILE *arq;
           struct Dados cli;
           struct endereco seu;
            int buscaIdade;
            arq = fopen("supermercado.txt","rb");
            system("cls");
            cabecalho();
            if(arq==NULL){
                    printf("Erro na abertura do arquivo!");
                    exit(1);
            }else{
                     printf("\n\n\t#Busca por idade#");
                     printf("ATENÇÃO: Aparecerá pessoas com idade igual e superior a digitada");
                     printf("\n\nDigite a idade que quer buscar: ");
                     scanf("%d", &buscaIdade);
                while(fread (&cli,sizeof(struct Dados), 1, arq)==1){

                     fflush(stdin);
                     printf("\n\n BUSCA POR IDADE!");
                        if(buscaIdade<=cli.idade){

                        printf("\n\nO nome das pessoas com idade %d = %s\n Logradouro: %s\n Cidade: %s", cli.idade, cli.nome, cli.seu.rua, cli.seu.cidade);

                     }
                     }
            }
            fclose(arq);

}
void pesquisaCidade(){
            struct Dados cli;
            struct endereco seu;
            int buscaCid;
            FILE *arq;

            arq = fopen("supermercado.txt","rb");
            system("cls");
            cabecalho();
            if(arq==NULL){
                    printf("Erro na abertura do arquivo!");
                    exit(1);
            }else{
                printf("\n\n\t#Busca por cidade#");
                printf("\n\nDigite a cidade que quer buscar: ");
                fgets(buscaCid,20,stdin);

                 while(fread (&cli,sizeof(struct Dados), 1, arq)==1){

                    if(strcmp(buscaCid,cli.seu.cidade)==0){
                     printf("\n\nO REGISTRO");
                     printf("\n\nCliente : %s",cli.nome);
                     fflush(stdin);
                     printf("\nIdade cliente : %d", cli.idade);
                     fflush(stdin);
                     printf("\n\nLogradouro cliente : %s", cli.seu.rua);
                     fflush(stdin);
                     printf("\n\nCEP cliente : %s" , cli.seu.cidade);

                     }
                 }
            }
}
void excluir(){
            struct Dados cli;
            int lixo;
            FILE *arq;

            arq = fopen("supermercado.txt","rb");
            system("cls");
            cabecalho();

            lixo = remove("supermercado.txt");

            if(lixo != 0){
                    printf("\n\nErro na remocao do arquivo!");
                    exit(1);
            }else{
                printf("\n\nArquivo removido");
            }

}
