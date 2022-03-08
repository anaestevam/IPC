#include <stdio.h>
#include <math.h>

int main(){
    int x;
    int soma =0;
    int i =1;

   soma=pow(x,i)/i;
    i=i+1;
    soma=(pow(x,i)/i);
    soma=0;
    i=1;

    while(i<=9){
        soma=soma+(pow(x,i)/i);
        i=i+1;
    }
    printf("%d", soma);
    return 0;
}

