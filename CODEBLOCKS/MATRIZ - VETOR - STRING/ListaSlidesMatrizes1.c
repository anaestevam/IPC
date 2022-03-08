#include <stdio.h>
#include <stdlib.h>

int main(){

    int Mat[5][5]={{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5},{1,2,3,4,5}};
    int i, j;


    printf("DIAGONAL PRINCIPAL");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i==j){
                printf("\n\n%d %d = %d", i, j, Mat[i][j]);
            }
        }
    }
    printf("\nDIAGONAL SECUNDARIA");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(i+j==5-1){
                printf("\n\n%d %d = %d", i, j, Mat[i][j]);
            }
        }
    }

    return 0;
}
