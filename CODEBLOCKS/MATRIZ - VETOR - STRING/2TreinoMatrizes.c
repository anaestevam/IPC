#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main(){

    int matriz[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int i,j;

    printf("Matriz Principal");
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i==j){
                printf("\nMatriz [%d][%d] = %d", i,j,matriz[i][j]);
            }
        }
    }
    printf("\n\nMatriz Secundaria");
     for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i+j==tam-1){
                printf("\nMatriz [%d][%d] = %d", i,j,matriz[i][j]);
            }
        }
    }
    printf("\n\nParte de baixo");
     for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i==tam-1){
                if(j!=0 && j!=4){
                       printf("\nMatriz [%d][%d] = %d", i,j,matriz[i][j]);
                if(i==3 || j==2){
                printf("\nMatriz [%d][%d] = %d", i,j,matriz[i][j]);
                }
                }
            }
      }
    }
    return 0;
}
