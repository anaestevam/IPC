#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void soma(float n1, float n2){
    printf("\nResultado: %.2f", n1+n2);
}
void subtrair(float n1, float n2){
    printf("\nResultado: %.2f", n1-n2);
}
void mult(float n1, float n2){
    printf("\nResultado: %.2f", n1*n2);
}
void divisao(float n1, float n2){
    printf("\nResultado: %.2f", n1/n2);
}
void potencia(float n1, float n2){
    printf("\nResultado: %.2f", pow(n1,n2));
}
void raiz(float n1){
    printf("\nResultado: %f", sqrt(n1));
}
void logaritmo(float n1){
    printf("\nResultado: %f", log10(n1));
}
void seno(float n1){
    printf("\nResultado: %f", sin(n1));
}
void cosseno(float n1){
    printf("\nResultado: %f", cos(n1));
}

int main(){
     setlocale(LC_ALL, ""); //identificar caracter especial

    float num1, num2, resultado;
    int op;

    //solicitar operação
    printf("\n\t**CALCULADORA**");
    printf("\n\n1- SOMA\n2- SUBTRAÇÃO\n3- MULTIPLICAÇÃO\n4- DIVISÃO\n5- POTENCIA\n6- RAIZ QUADRADA\n7- LOGARITMO\n8- SENO\n9- COSSENO");
    printf("\n\nDigite operação que quer usar: ");
    scanf("%d", &op);
    getchar();

    switch(op){

        case 1:
                //solicitar numeros
            printf("\n\nDigite primeiro valor: ");
            scanf("%f", &num1);
            printf("Digite segundo valor: ");
            scanf("%f", &num2);

            soma(num1,num2);
            break;
        case 2:
            printf("\n\nDigite primeiro valor: ");
            scanf("%f", &num1);
            printf("\nDigite segundo valor: ");
            scanf("%f", &num2);

            subtrair(num1,num2);
            break;
        case 3:
            printf("\n\nDigite primeiro valor: ");
            scanf("%f", &num1);
            printf("\nDigite segundo valor: ");
            scanf("%f", &num2);

            mult(num1,num2);
            break;
        case 4:
            printf("\n\nDigite primeiro valor: ");
            scanf("%f", &num1);
            printf("\nDigite segundo valor: ");
            scanf("%f", &num2);

            divisao(num1,num2);
            break;
        case 5:
            printf("\n\nDigite valor da base: ");
            scanf("%f", &num1);
            printf("\nDigite valor do expoente: ");
            scanf("%f", &num2);

            potencia(num1,num2);
            break;
        case 6:
            printf("\n\nDigite valor: ");
            scanf("%f", &num1);

            raiz(num1);
            break;
        case 7:
            printf("\n\nDigite valor: ");
            scanf("%f", &num1);

            logaritmo(num1);
            break;
        case 8:
            printf("\n\nDigite valor: ");
            scanf("%f", &num1);

            seno(num1);
            break;
        case 9:
            printf("\n\nDigite valor: ");
            scanf("%f", &num1);

            cosseno(num1);
            break;
    }

    return 0;
}
