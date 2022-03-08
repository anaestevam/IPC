#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int codigo, quantidade;
    float soma;

        printf("\n\t\tEspecificacao\n");    printf("\tPreço Unitario");
        printf("\n\t100-Cachorro quente");  printf("\t\t1,10");
        printf("\n\t101-Bauru simples");    printf("\t\t1,30");
        printf("\n\t102-Bauru c/ ovo");     printf("\t\t1,50");
        printf("\n\t103-Hamburger");        printf("\t\t\t1,10");
        printf("\n\t104-Cheeseburger");     printf("\t\t1,30");
        printf("\n\t105-Refrigerante");   printf("\t\t1,00");

    printf("\nDigite do Codigo do Item Pedido: ");
    scanf("%d", &codigo);
    printf("\nDigite a quantidade: ");
    scanf("%d", &quantidade);

    if(codigo==100){
        soma=quantidade*1.10;
        printf("Valor a ser pago: %.2f", soma);
    }
    if(codigo==101){
        soma=quantidade*1.30;
        printf("Valor a ser pago: %.2f", soma);
    }
    if(codigo==102){
        soma=quantidade*1.50;
        printf("Valor a ser pago: %.2f", soma);
    }
    if(codigo==103){
        soma=quantidade*1.10;
        printf("Valor a ser pago: %.2f", soma);
    }
    if(codigo==104){
        soma=quantidade*1.30;
        printf("Valor a ser pago: %.2f", soma);
    }
    if(codigo==105){
        soma=quantidade*1.00;
        printf("Valor a ser pago: %.2f", soma);
    }

    return 0;
}
