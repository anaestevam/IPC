#include <stdio.h>
#include <stdlib.h>

int main(){
    //declarei as variav�is
    float x, y, z;
    float resultado;

    //solicitei cada n�mero
    printf("Digite valor de x: ");
    scanf("%f", &x);
    printf("Digite valor de y: ");
    scanf("%f", &y);
    printf("Digite valor de z: ");
    scanf("%f", &z);

    //usei a formula que a quest�o j� manda, e usei a forma como o programa entende o log
    //o log � calculado assim:
    //o valor base(2) que vai ser multiplicado por ele mesmo ex:
    //2x2x2x2x2x2=64, at� dar 64, no caso foram 6
    //log � 6, mas s� usar dessa forma ai que o programa entende
    resultado=5*x+((7*y)/((9*z)+x))+(2*(x-y))+log2(64);

    //pedi pra imprimir, usando o float, e s� duas casas depois da virgula
    printf("O resultado eh %.2f", resultado);

    return 0;
}
