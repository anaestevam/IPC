#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, maior;

    maior=-10000;
    while(a!=9999){
        if(a>maior){
            maior=a;
        }
    printf("Digite valor: ", a);
        scanf("%d", &a);
    }


    printf("\no maior eh %d", maior);

    return 0;
}
