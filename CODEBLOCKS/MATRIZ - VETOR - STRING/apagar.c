#include <stdio.h>
#include <stdlib.h>
#define tam 10
int main(){

    int Veta[]={1,2,3,4,5,6,7,8,9,10};
    int Vetb[tam];
    int i;

    for(i=0;i<tam;i++){
        Vetb[i]=Veta[9-i];
    }
    for(i=0;i<tam;i++){

        printf(" %d \n", Vetb[i]);
    }

    return 0;
}
