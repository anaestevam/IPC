#include <stdio.h>


int main(){
    FILE *arq;
    arq= fopen("exemplo.txt", "wb");
    if(arq == NULL){
        printf("Erro na abertura do arquivo. \n");
        exit(1);
    }
    fclose(arq);

    return 0;
}
