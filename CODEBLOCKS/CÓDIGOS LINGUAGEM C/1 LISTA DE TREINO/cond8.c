#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

        float salario, aumento;

        printf("Digite salario: ");
        scanf("%f", &salario);

       // aumento=salario*0.15;

        if(1500>=salario && salario<1750){
            printf("O aumento eh 12%");
        }else if(1750>=salario && salario<2000){
            printf("O aumento eh 10%");
        }else if(2000>=salario && salario<3000){
            printf("O aumento eh 7%");
        }else if(salario>=3000){
            printf("O aumento eh 5%");
        }


    return 0;
}

