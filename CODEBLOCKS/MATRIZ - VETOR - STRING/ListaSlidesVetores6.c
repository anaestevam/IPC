#include <stdio.h>
#include <stdlib.h>

int main(){

    int NumA[3];
    int NumB[3];
    int i, subtrair[3];

    for(i=0;i<3;i++){

        printf("Digite valor %d: ", i+1);
        scanf("%d", &NumA[i]);
        printf("Digite valor %d: ", i+1);
        scanf("%d", &NumB[i]);
    }
    for(i=0;i<3;i++){

        NumA[i]-=NumB[2-i];
        subtrair[i]=NumA[i];
        printf("Posicao %d = %d\n", i+1, subtrair[i]);
    }



    return 0;
}
