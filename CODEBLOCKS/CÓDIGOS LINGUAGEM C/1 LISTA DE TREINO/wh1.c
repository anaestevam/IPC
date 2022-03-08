#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, cont, soma, media;
    a=0;
    cont=soma=0;

    while(a!=9999){

        cont++;
        soma=soma+a;
    printf("Digite valor: ", a);
        scanf("%d", &a);
    }
    media=soma/cont;

    printf("\nsoma %d", soma);
    printf("\nmedia %d", media);

    return 0;
}
