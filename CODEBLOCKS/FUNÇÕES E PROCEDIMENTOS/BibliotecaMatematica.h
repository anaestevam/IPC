#include <stdio.h>
#include <math.h>

int Div(int n1);



int Div(int n1){
    int cont=0, i;

    for(i=1;i<=n1;i++){
        if(n1%i==0){
            cont++;
        }
    }

    return (cont);
}

int Primo(int n1){
    int i, cont=0;

    for(i=1;i<=n1;i++){
        if(n1%i==0){
            cont++;
        }
    } if(cont<=2){
        printf("E primo!");
    }else{
        printf("Nao e primo!");
    }

    return(cont);
}

long int Fatorial(int n1){
    int i, fat=1, cont;

    cont=n1;
    for(i=1; i<=n1;i++){
        fat*=cont;
        cont--;
    }
    return(fat);
}

double radianoParaGraus(double rad){
    return (rad*180/3.141592);
}
