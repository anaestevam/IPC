#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <conio.h>
#define TAM 40

int Menu(int opcao){
            printf("\n\t\t\t\tBEM VINDO AO NOVO PLANO DE SUPERMERCADO!");
            printf("\n\n\t #Caixa#");
            printf("\n\n\t 1.Cadastrar Cliente");
            printf("\n\t 2.Pesquisar por Idade");
            printf("\n\t 3.Pesquisar por Nome");
            printf("\n\t 4.Pesquisar por Cidade");
            printf("\n\t 5.Sair");
            printf("\n\n\t Digite Opção: ");
            scanf("%d", &opcao);
            return(opcao);
}
struct endereco {
    char rua[TAM];
    char cidade_estado_cep[TAM];
};
struct Dados{
    char nome[20];
    int idade;
    int qtde[1][150];
    float valor[150];
    struct endereco seu;
};
struct armzar{
    struct Dados cli;
};

int main(){
        setlocale(LC_ALL, ""); //identificar caracter especial

    struct Dados cliente[10];
    struct armzar ente[150];
    int A, x, l=0, opcao, j, verIdade, cont=0, i, t, opcao1;
    float total=0;
    char BuscaNome[20], BuscaCid[20];

    opcao1=Menu(opcao);
    fflush(stdin);

        while(opcao1d!=5){

        switch(opcao1){

                 case 1:

                    total=0;
                    fflush(stdin);
                    printf("\nDigite nome: ");
                    fgets(cliente[cont].nome,20,stdin);
                    fflush(stdin);
                    printf("\nDigite idade: ");
                    scanf("%d", &cliente[cont].idade);
                    fflush(stdin);
                    printf("\nDigite Logradouro: ");
                    fgets(cliente[cont].seu.rua,50, stdin);
                    printf("\nDigite Cidade: ");
                    fgets(cliente[cont].seu.cidade_estado_cep,50, stdin);
                    fflush(stdin);
                     printf("\nDigite quantidade de produtos no total: ");
                     scanf("%d", &A);

                     for(x=0;x<A;x++){
                             printf("\nDigite o preço do produto %d:\t",x+1);
                             scanf("%f",&cliente[cont].valor[x]);

                       for(j=0;j<1;j++,l++){
                                        printf("\nDigite a quantidade do produto %d:\t",x+1);
                                        scanf("%d", &cliente[cont].qtde[x][j]);
                                        total=total+(cliente[cont].valor[x]*cliente[cont].qtde[x][j]);
                        }
                    }
                    cont++;
                    //system("cls");

                     fflush(stdin);
                     printf("\n\nDADOS DO CLIENTE!");
                     printf("\nCliente : %s",cliente[cont-1].nome);
                     fflush(stdin);
                     printf("\nIdade cliente : %d", cliente[cont-1].idade);
                     fflush(stdin);
                     printf("\n\nLogradouro cliente : %s", cliente[cont-1].seu.rua);
                     fflush(stdin);
                     printf("\nCEP cliente : %s" , cliente[cont-1].seu.cidade_estado_cep);
                     fflush(stdin);

                     printf("\nTotal a pagar: R$ %.2f", total);
                     printf("\n\n\t***Deseja retornar ao menu***\n\t 1-SIM 2-NÃO\n");
                     scanf("%d", &opcao);
                     if(opcao==1){
                        Menu(opcao1);
                     }
                    fflush(stdin);
                    break;
               // system("cls");
                 case 2:
                     fflush(stdin);
                     printf("ATENÇÃO: Aparecerá pessoas com idade igual e superior a digitada");
                     printf("\n\nDigite a idade que quer buscar: ");
                     scanf("%d", &verIdade);
                     fflush(stdin);
                     printf("\n\n BUSCA POR IDADE!");
                     for(i=0,t=0;i<=cont;i++){
                        if(verIdade<=cliente[i].idade){

                        printf("\n\nO nome das pessoas com idade %d = %s\n Logradouro: %s\n Cidade: %s", cliente[i].idade, cliente[i].nome, cliente[i].seu.rua, cliente[i].seu.cidade_estado_cep);
                        t++;
                     }else if(t==0 && i==cont){
                        printf("\n\nNada encontrado!");
                     }
                     }
                     printf("\n\n\t***Deseja retornar ao menu***\n\t 1-SIM 2-NÃO\n");
                     scanf("%d", &opcao);
                     if(opcao==1){
                        Menu(opcao1);
                     }
                    fflush(stdin);
                    break;
                 case 3:
                     fflush(stdin);
                     printf("\n\nDigite a nome que quer buscar: ");
                     fgets(BuscaNome,20,stdin);
                     for(i=0, t=0;i<=cont;i++){
                     if(strcmp(BuscaNome,cliente[i].nome)==0){
                     printf("\n\n REGISTRO DA BUSCA");
                     fflush(stdin);
                     printf("\nCliente : %s",cliente[i].nome);
                     fflush(stdin);
                     printf("\nIdade cliente : %d", cliente[i].idade);
                     fflush(stdin);
                     printf("\n\nLogradouro cliente : %s", cliente[i].seu.rua);
                     fflush(stdin);
                     printf("\n\nCEP cliente : %s" , cliente[i].seu.cidade_estado_cep);
                     fflush(stdin);
                     t++;
                     }else if(t==0 && i==cont){
                        printf("\n\nNada encontrado!");
                     }
                     }

                    fflush(stdin);
                    break;
                 case 4:
                     fflush(stdin);
                     printf("\n\nDigite a cidade que quer buscar: ");
                     fgets(BuscaCid,20,stdin);
                     for(i=0, t=0;i<=cont;i++){
                     if(strcmp(BuscaCid,cliente[i].seu.cidade_estado_cep)==0){
                     printf("\n\nO REGISTRO");
                     printf("\n\nCliente : %s",cliente[i].nome);
                     fflush(stdin);
                     printf("\nIdade cliente : %d", cliente[i].idade);
                     fflush(stdin);
                     printf("\n\nLogradouro cliente : %s", cliente[i].seu.rua);
                     fflush(stdin);
                     printf("\n\nCEP cliente : %s" , cliente[i].seu.cidade_estado_cep);
                     }else if(t==0 && i==cont){
                        printf("\n\nNada encontrado!");
                     }
                     }

                    fflush(stdin);
                    break;
        }
}
    return 0;
}

