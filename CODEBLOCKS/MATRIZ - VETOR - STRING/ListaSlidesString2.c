#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[200];
    int i, j, tam, y=0;

    printf("Digite uma frase palindromo: ");
    gets(frase);

    tam=strlen(frase);
    j=tam-1;
    for(i=0;i<=j;i++){
        if(frase[i]==frase[j]){
            j=j-1;
        }else{
            y++;
        }
    }
        if(y==0){
            printf("E palindromo!");
        }else{
            printf("Nao e");
        }


    return 0;
}
