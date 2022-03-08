#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char palavra[100];
    int i;

    printf("Digite uma palavra: ");
    gets(palavra);


    printf("Impressao: %s\n", palavra);

    getch();
    return 0;
}

