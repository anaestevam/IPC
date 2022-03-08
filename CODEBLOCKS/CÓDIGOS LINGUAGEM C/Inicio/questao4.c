#include <stdio.h>
#include <stdlib.h>

int main(){
    //declarei as variavéis
    float x, y, z;
    float resultado;

    //solicitei cada número
    printf("Digite valor de x: ");
    scanf("%f", &x);
    printf("Digite valor de y: ");
    scanf("%f", &y);
    printf("Digite valor de z: ");
    scanf("%f", &z);

    //usei a formula que a questão já manda, e usei a forma como o programa entende o log
    //o log é calculado assim:
    //o valor base(2) que vai ser multiplicado por ele mesmo ex:
    //2x2x2x2x2x2=64, até dar 64, no caso foram 6
    //log é 6, mas só usar dessa forma ai que o programa entende
    resultado=5*x+((7*y)/((9*z)+x))+(2*(x-y))+log2(64);

    //pedi pra imprimir, usando o float, e só duas casas depois da virgula
    printf("O resultado eh %.2f", resultado);

    return 0;
}
