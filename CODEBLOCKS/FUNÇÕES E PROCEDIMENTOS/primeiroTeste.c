#include <stdio.h>

float media2(float a, float b, float c){

    float med;
    med=(a*4+b*5+c*6)/15;
    return(med);
}

int main(){

    float num1, num2, num3, med;
    puts("Digite nota 1: ");
    scanf("%f", &num1);
    fflush(stdin);
    puts("Digite nota 2: ");
    scanf("%f", &num2);
    fflush(stdin);
    puts("Digite nota 3: ");
    scanf("%f", &num3);

    med=media2(num1, num2, num3); //chamando a função
    printf("Sua media e %.2f", med);
    return 0;
}
