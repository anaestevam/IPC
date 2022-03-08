#include <stdio.h>
#include <stdlib.h>

int main(){

    float num[5], div;
    int i, maior=-500;

     for(i=0;i<5;i++){
        printf("Digite Numero: ");
        scanf("%f", &num[i]);

        if(num[i]>maior){
            maior=num[i];
        }
    }
    for(i=0;i<5;i++){
        div=num[i]/maior;
        printf(" %.2f ", div);
    }


    return 0;
}

