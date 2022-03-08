#include <stdio.h>
#include <stdlib.h>

int main(void){

    int A[10];
    int i, resultado=1;

    printf("Numeros dos Dados:\n");

    srand(time(NULL));
    for(i=1;i<= 10;i++) {
        A[i]=1+(rand()%6);
        printf("Dados Gerados: %d \n", A[i]);
    }

    for(i=1;i<=10;i++){

        if(A[i]==A[i+1]){
            resultado++;
        }else{
            resultado=1;
        }
        if(resultado>=3){
                i=10;
            printf("Nao e adequado");
        }
        if(resultado<3 && i==10){
            printf("E adequado");
        }
    }


    return 0;
}
