#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, resto=0;
    int cont=1;

    printf("Digite numero: ");
    scanf("%d", &num);

    while(cont<=num){
        if(num%cont==0){
            resto++;
        }
        cont++;
    }
        if(resto==2){
            printf("E primo");
        }else{
            printf("Nao e primo");
        }


    return 0;
}
