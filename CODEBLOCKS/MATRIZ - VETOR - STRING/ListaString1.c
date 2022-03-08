#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[200];
    int opcao, tam=0, i, y=1;


    printf("Digite uma frase: ");
    gets(frase);

    printf("\t\t#MENU#");
    printf("\n1-Imprime o cumprimento da frase");
    printf("\n2-Imprime os dois primeiros e dois ultimos caracteres da frase");
    printf("\n3-Imprime a frase espelhada");
    printf("\n4-Imprime o numero de palavras existentes na frase");
    printf("\n5-Termina o algoritmo");

    printf("\n\nOPCAO:");
    scanf("%d", &opcao);

    tam=strlen(frase);
    switch(opcao){

        case 1:
            printf("O tamanho e: %d", tam);
        break;
        case 2:
            printf("Dois primeiros: %c %c e dois ultimos: %c %c", frase[0], frase[1], frase[tam-1], frase[tam-2]);
        break;
        case 3:
            /*IMPORTANTE*/
            for(i=tam-1;i>=0;i--){
                printf("%c", frase[i]);
            }
        break;
        case 4:
            for(i=tam-1;i>=0;i--){
                if(frase[i]==' '){
                    y++;
                }
            }printf("%d", y);
        break;
    }
    return 0;
}
