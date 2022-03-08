#include <stdio.h>

void Linha(char i){

        printf("%c", i);
}
void Num(){
    int i;
    for(i=0;i<5;i++)printf("%d\n", i+1);
}

int main(){

    Linha('*');
    printf("Numeros entre 1 e 5\n");
    Linha('*');
    Num();
    Linha('*');
    return 0;
}


