#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    int soma=0;

    printf("Digite um valor: ");
    scanf("%d", &a);
    printf("Digite outro valor: ");
    scanf("%d", &b);

    soma = a + b;

    printf("Resultado: %d", soma);

    return 0;
}
