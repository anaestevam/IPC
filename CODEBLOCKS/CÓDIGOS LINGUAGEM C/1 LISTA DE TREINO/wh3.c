#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, quant_par, quant_impar;

    printf("Digite valor: ");
    scanf("%d", &a);

    quant_impar=0;
    quant_par=0;

    while(a!=9999){
        if(a%2==0){
            quant_par++;
        }else{
            quant_impar++;
        }
         printf("Digite valor: ",a);
    scanf("%d", &a);
    }
        printf("\nNumeros pares %d", quant_par);
        printf("\nNumeros impares %d", quant_impar);
    return 0;
}

