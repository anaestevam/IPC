#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int i, num=0;

    printf("Digite o valor da tabuada: ");
    scanf("%d", &num);

    for(int i=1;i<=10;i++){
    printf("%d * %d = %d", num, i, i*num);
    printf("\n");
    }


    return 0;
}
