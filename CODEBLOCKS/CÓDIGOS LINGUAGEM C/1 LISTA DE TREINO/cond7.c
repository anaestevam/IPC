#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    int num, f1, f2, f3;

    printf("Digite um numero: ");
    scanf("%d", &num);

    if(num<=10){
        printf("F1\n");
    }
    if(num>10 && num<=100){
        printf("F2\n");
    }
    if(num>100){
        printf("F3\n");
    }

    return 0;
}
