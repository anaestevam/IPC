#include <stdio.h>
#include <stdlib.h>

int main(){

    char lanchonete[200];
    float xtudo[5], menorPreco=98474;
    int i, b;

    printf("\n\t\tBem Vindo ao Promocoes Show!");

    for(i=0;i<5;i++){

        printf("\nDigite a Lanchonete %d: ", i+1);
        scanf("%s", &lanchonete[i]);
        printf("\nDigite o Preço do XTUDO %d: ", i+1);
        scanf("%f", &xtudo[i]);
        fflush(stdin);
    }


    for(i=0;i<5;i++){
        if(xtudo[i]<menorPreco){
            menorPreco=xtudo[i];
            b=i;
        }
    }
         printf("\n\nO menor preco e: %.2f", lanchonete[b]);

    return 0;
}
