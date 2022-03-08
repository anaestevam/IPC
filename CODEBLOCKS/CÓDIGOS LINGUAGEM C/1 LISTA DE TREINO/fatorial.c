#include <stdio.h>
#include <math.h>

int main(){

    int cont, num;
    long int fat =1;

    printf("Digite valor: ");
    scanf("%d", &num);
    cont=num;

    while(cont>=1){
        fat=fat*cont;
        cont--;
    }
    printf("%d",fat);

    return 0;
}
