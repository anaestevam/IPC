#include <stdio.h>
#include <math.h>

int main(){

    int mult=1;
    int cont=2;

    while(cont<=8){
        mult=mult*cont;

        cont=cont+2;
    }
        printf("%d", mult);

    return 0;
}
