#include <stdio.h>
#include <math.h>

int main(){

    int a, b, soma, subtracao, divisao, produto;

    printf("Digite um valor: \n");
    scanf("%d", &a);
    printf("Digite o segundo valor: \n");
    scanf("%d", &b);

    soma = a + b;
    subtracao = a - b;
    divisao = a / b;
    produto = a * b;

    printf("Soma :%d \n", soma);
    printf("Subtracao :%d \n", subtracao);
    printf("Divisao :%d \n", divisao);
    printf("Produto :%d\n", produto);

    return 0;
}
