#include <stdio.h>

int main(){

    float num[]={1,2,3,4,5,6,7,8,9,10};
    int i, maior=-265;
    float resul=0;

    for(i=0;i<10;i++){

        if(num[i]>maior){
            maior=num[i];
        }
    }
    for(i=0;i<10;i++){
        resul=num[i]/maior;
        printf(" %.0f / %d = %.1f \n", num[i], maior, resul);
    }

    return 0;
}
