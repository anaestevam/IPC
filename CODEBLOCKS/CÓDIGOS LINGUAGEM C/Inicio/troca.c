#include <stdio.h>
#include <math.h>

int main()
{
    /*Troca os valores de duas variáveis */
    int x, y, z, aux;
    x = 1;
    y = 2;
    z = 3;
    printf("Valor de x antes: %d \n", x);
    printf("Valor de y antes: %d \n", y);
    printf("Valor de z antes: %d \n", z);
    aux = x;
    x = y; /* refazer isso */
    y = aux;
    y = z;
    z = aux;
    printf("Valor de x depois: %d \n", x);
    printf("Valor de y depois: %d \n", y);
    printf("Valor de z depois: %d \n", z);
    return 0;
}
