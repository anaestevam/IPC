#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    int i;
    int b;

    printf("Gerando 10 valores aleatorios: \n\n");

    for(i=0;i<10;){

        b=rand()%100;
        if(b>=1&&b<=6){
    i++;
printf(" %d ", b);
        }
    }

    return 0;
}
