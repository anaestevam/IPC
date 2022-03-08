#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(){

    char frase1[100], frase2[100];
    int i;

    printf("Digite Frase 1: ");
    gets(frase1);
    printf("Digite Frase 2: ");
    gets(frase2);

    strcat(frase1,frase2);
    puts(frase1);

    getch();
    return 0;
}


