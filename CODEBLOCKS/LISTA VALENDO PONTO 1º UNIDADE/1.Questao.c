#include<stdio.h>

int main(){
    int valor, nota100, nota10, nota5, nota1;
    printf("Entre com valor: "); // Usuario vai entrar com o valor em reais.
    scanf("%d", &valor);

    nota100=valor/100;  // Nota100 vai receber o valor digitado pelo usuario e dividir por 100 e consequentemente pegar o resto da divisão.
    valor=valor%100;
    nota10=valor/10;    // Nota10 vai receber o valor digitado pelo usuario e dividir por 10 e consequentemente pegar o resto da divisão.
    valor=valor%10;
    nota5=valor/5;      // Nota5 vai receber o valor digitado pelo usuario e dividir por 5 e consequentemente pegar o resto da divisão.
    valor=valor%5;
    nota1=valor/1;      // Nota1 vai receber o valor digitado pelo usuario e dividir por 1 e consequentemente pegar o resto da divisão.
    valor=valor%1;

    // A seguir, a  máquina irá mostrar o resultado tal como quantas notas será decomposta para chegar ao valor digitado pelo usuario.

    printf("Notas necessarias de 100: %d\n", nota100);
    printf("Notas necessarias de 10: %d\n", nota10);
    printf("Notas necessarias de 5: %d\n", nota5);
    printf("Notas necessarias de 1: %d\n", nota1);

    getch();
    return 0;
}
