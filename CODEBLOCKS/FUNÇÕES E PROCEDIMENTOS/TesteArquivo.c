#include "C:\Users\anaes\OneDrive\Área de Trabalho\CODEBLOCKS\FUNÇÕES E PROCEDIMENTOS\CalculadoraSimples.h"


int main(){

    float n1, n2;

    printf("Digite Valor: ");
    scanf("%f", &n1);
    printf("Digite Valor: ");
    scanf("%f", &n2);

    printf("\n\nA soma e: %.1f", Soma(n1,n2));
    printf("\n\nA subtracao e: %.1f", Subtracao(n1,n2));
    printf("\n\nA multiplicacao e: %.1f", Multiplicacao(n1,n2));
    printf("\n\nA divisao e: %.1f", Divisao(n1,n2));

    return 0;
}
