#include <stdio.h>
#include <math.h>

int main(){
    int x;
    int soma =0;
    int i =1;

    soma=(x/i);
    i=i+2;
    soma=((x)/(i));
    soma=0;
    i=1;

    while(i<=7){
        soma=soma+((x)/(i));
        i=i+2;
    }
    printf("%d", soma);

    return 0;
}
