#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[200];
    int i, j, tam=0, y=0;

    printf("Digite uma frase palindromo: ");
    gets(frase);

    tam=strlen(frase);
    j=tam-1;
    for(i=tam-1;i>=0;i--){
        if(frase[i]==' ' || frase[i]=='-'){
             frase[i]=frase[i+1];
        }
    }
    for(i=0;i<=j;i++){
        if(frase[i]==frase[j]){
            j=j-1;
        }else{
            y++;
        }
     }
        if(y==1){
            printf("E palindromo");
        }else{
            printf("Nao e");
        }

    return 0;
}
