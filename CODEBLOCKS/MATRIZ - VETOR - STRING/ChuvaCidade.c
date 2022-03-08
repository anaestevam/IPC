#include <stdio.h>
#include <stdlib.h>

int main(){

    char cidade[200];
    char cidade2;
    int chuva[5];
    int i, teste;

    printf("\n\t\tBem Vindo a Previsão do Tempo");

    for(i=0;i<5;i++){

        printf("\nDigite Cidade %d: ", i+1);
        scanf("%s", &cidade[i]);
        printf("\nDigite a porcentagem de chuva %d: ", i+1);
        scanf("%d", &chuva[i]);
        fflush(stdin);
    }

    printf("\n\nQUAL CIDADE QUER VER? ");
    scanf("%s", &cidade2);

    for(i=0;i<5;i++){
        if(cidade2==cidade[i]){
            printf("A porcentagem de chuva e: %d", chuva[i]);
        }
    }

    return 0;
}
