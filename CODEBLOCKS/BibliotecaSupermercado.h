#include <stdio.h>

void linha(){
    int i;
    for(i=0;i<=55;i++)printf("-");
}
void cabecalho(){
    system("cls");
    linha();
    printf("\n\tBEM VINDO AO NOVO PLANO DE SUPERMERCADO!\n");
    linha();
}
int Menu(int opcao){
            cabecalho();
            printf("\n\n\t #CAIXA#");
            printf("\n\n\t 1.Cadastrar Cliente");
            printf("\n\t 2.Lista de Clientes");
            printf("\n\t 3.Pesquisar por Idade");
            printf("\n\t 4.Pesquisar por Nome");
            printf("\n\t 5.Pesquisar por Cidade");
            printf("\n\t 6.Excluir cadastro");
            printf("\n\t 7.Sair");
            printf("\n\n\t Digite Opção: ");
            scanf("%d", &opcao);
            getchar();
            return (opcao);
}
