#include <stdio.h>
#include <math.h>

int main(){
    int num;
    int quant =0;
    int cont =1;

    do{
    printf("Digite numero: ");
    scanf("%d", &num);

    }while(num<=0);
       // printf("Digite outro valor", num);


    while(cont<=num){
        if(num%cont==0){
            quant+=1;
        }
        cont++;
    }
    if(quant==2){
        printf("Eh primo\n");
    }else{
        printf("Nao eh primo");
    }
    return 0;
}

