#include <stdio.h>
#include <math.h>


void main(void){

    float d, s, p, t;

    d = 500; //deposito inicial
    p = d + 0.01*d; //primeiro mes
    s = p + 0.01*p; //segundo mes
    t = s + 0.01*s; // terceiro mes

    printf("Valor da conta: %.2f \n", t);
    return 0;
}
