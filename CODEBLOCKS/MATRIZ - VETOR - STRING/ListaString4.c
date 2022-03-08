#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[200];
    int i, y=0, tam=0;

    printf("Digite uma frase: ");
    gets(frase);

    tam=strlen(frase);

    for(i=0;i>tam;i++){
        if(frase[i]=='r' && frase[i]=='a'){
             y++;
        }
    }printf("Ocorrencias: %d", y);

    return 0;
}

