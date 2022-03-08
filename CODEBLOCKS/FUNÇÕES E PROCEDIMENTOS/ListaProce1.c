#include <stdio.h>

void Imprimir(){
    int i;
    for(i=0;i<20;i++)printf("*");
    printf("\n");
}
void Num(){
    int i;
    for(i=0;i<5;i++)printf("%d\n", i+1);
}

int main(){

    Imprimir();
    printf("Numeros entre 1 e 5\n");
    Imprimir();
    Num();
    Imprimir();
    return 0;
}
