#include <stdio.h>
#include <math.h>


void main(void){

    float c, s, m, resto;

    c = 235; //valor da conta
    s = c + 532; //soma
    m = (7*1)+(6*2)+(7*3); //multiplicacao
    resto = (m == 0); // terceiro mes

    printf("Valor da soma: %.2f \n", s);
    printf("Valor da multiplicacao: %.0f \n", m);
    printf("Ultimo digito: %.0f \n", resto);
    return 0;
}
