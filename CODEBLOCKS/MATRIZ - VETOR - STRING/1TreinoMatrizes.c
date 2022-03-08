#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    float nota[3][3];
    int i, j;

    for(i=0;i<3;i++)
        for(j=0;j<3;j++){
        printf("Numeros: ");
        scanf("%f", &nota[i][j]);
    }

    for ( i=0; i<3; i++ )
        for ( j=0; j<3; j++ )
    {
        printf(" \nMatriz de [%d][%d] = %f", i,j,nota[i][j]);
    }

    return 0;
}
