#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Discente{
    int matricula;
    char nome[10];
    char sexo;
    int anoEntrada;
};

int main(){

    struct Discente a[3];
    int i, teste;

    for(i=0;i<3;i++){
        printf("Matricula de Aluno [%d]:", i);
        scanf("%d", &a[i].matricula);
        fflush(stdin);
        printf("Nome de Aluno [%d]:", i);
        fgets(a[i].nome,10,stdin);
        fflush(stdin);
        //while(teste = getchar()!='\n' && teste!='EOF');
        printf("Sexo de Aluno [%d]:", i);
        scanf("%c", &a[i].sexo);
        printf("Ano de Entrada de Aluno [%d]:", i);
        scanf("%d", &a[i].anoEntrada);
        printf("\n");

    }

    for(i=0;i<3;i++){
        printf("\n\n[%d] = %d", i, a[i].matricula);
        printf("\n[%d] = %s", i, a[i].nome);
        printf("\n\n[%d] = %c", i, a[i].sexo);
        printf("\n\n[%d] = %d", i, a[i].anoEntrada);
    }

    return 0;
}
