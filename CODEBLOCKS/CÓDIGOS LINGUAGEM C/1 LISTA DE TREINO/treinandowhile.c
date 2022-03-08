#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, cont, soma, media, menor;
 printf("Digite valor: ");
            scanf("%d", &a);
    cont=soma=0;

    menor=100000;

    while(a!=9999){

        cont++;
        soma=soma+a;

        if(a<menor){
            menor=a;
        } printf("Digite valor: ", a);
            scanf("%d", &a);

    }
        media=soma/cont;

        printf("\nsoma %d", soma);
        printf("\nmedia %d", media);
        printf("\no menor %d", menor);

    return 0;
}
