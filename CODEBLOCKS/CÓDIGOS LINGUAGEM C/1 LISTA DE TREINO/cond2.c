#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a, b, c;

    printf("Digite valor: ");
    scanf("%d", &a);
    printf("Digite valor: ");
    scanf("%d", &b);
    printf("Digite valor: ");
    scanf("%d", &c);

    printf("%d %d %d \n", a, b, c);

    if(a>b && a>c){
        printf("O maior eh: %d", a);
    }
    if(b>a && b>c){
        printf("O maior eh: %d", b);
    }
    if(c>a && c>b){
        printf("O maior eh: %d", c);
    }

    return 0;
}
