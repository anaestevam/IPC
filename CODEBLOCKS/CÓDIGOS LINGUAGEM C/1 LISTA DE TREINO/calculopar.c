#include <stdio.h>
#include <math.h>

int main(){

    int cont =0;
    int acm =0;

    while(cont<=10){
        if(cont%2==0){
            acm =acm + cont;
        }
        cont ++;
    }
    printf("%d \n", acm);

    return 0;
}

