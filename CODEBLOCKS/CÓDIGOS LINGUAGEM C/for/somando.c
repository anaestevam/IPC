#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, soma=0;

    for(i=1; i<=10; i++){
        soma+=i;
    }
    printf("Resultado %d", soma);

    return 0;
}
