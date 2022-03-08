#include <stdio.h>
#include <stdlib.h>
#define tam 10
int main(){

    int VetA[tam]={1,2,3,4,5,6,7,8,9,10};
    int VetB[tam];
    int i;

    for(i=0;i<tam;i++){
           VetB[i]=VetA[9-i];
    }
    for(i=0;i<tam;i++){
        printf("%d ", VetB[i]);
    }

    return 0;
}
