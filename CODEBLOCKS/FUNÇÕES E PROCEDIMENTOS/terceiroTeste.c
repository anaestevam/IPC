#include <stdio.h>

 void imprimeA(){
    int i;
    for(i=0;i<10;i++){
        printf("\n");
    }
 }
 void imprimeL(){
    int i;
    for(i=0;i<10;i++){
        printf("-");
        printf("\n");
    }
 }

int main(){

    imprimeA();
    imprimeL();
}
