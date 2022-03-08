#include <stdio.h>
#include <stdlib.h>

int main(){

    int Num[5]={5,6,41,25,64};
    int maior=-5641351, i;

    for(i=0;i<5;i++){
        if(Num[i]>maior){
            maior=Num[i];
        }

    }printf("O numero maior e %d", maior);


    return 0;
}
