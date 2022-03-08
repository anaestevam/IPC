#include <stdio.h>
#include <math.h>

int main(){

    int cont =10;

    while(cont<=20){
        if(cont%2==0){
            printf("numero %d eh par\n", cont);
        }
        cont=cont+1;
    }
    return 0;
}
