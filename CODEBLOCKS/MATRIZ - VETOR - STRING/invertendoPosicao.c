#include <stdio.h>
#include <stdlib.h>

int main(){

    int posicao[10];
    int inverso, i, soma;

    for(i=0;i<10;i++){
        printf("Digite valor: ");
        scanf("%d", &posicao[i]);
    }
    for(i=0;i<10;i++){

        inverso=9-i;
        printf(" %d ", posicao[inverso]);
    }

    return 0;
}
