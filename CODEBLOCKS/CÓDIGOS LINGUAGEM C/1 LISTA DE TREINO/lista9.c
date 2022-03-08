#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){

    char a, b, c, d, e;
    long int s;

    printf("Digite algarismo: ");
    scanf("%c", &a);
    printf("Digite algarismo: \n");
    scanf("%c", &b);
    printf("Digite algarismo: \n");
    scanf("%c", &c);
    printf("Digite algarismo: \n");
    scanf("%c", &d);
    printf("Digite algarismo: \n");
    scanf("%c", &e);

    s = 6*a + 5*b + 4*b + 3*d + 2*e;

    printf("%c %f", s);



    return 0;
}
