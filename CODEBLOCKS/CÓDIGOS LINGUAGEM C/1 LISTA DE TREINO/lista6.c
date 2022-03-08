#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){

    float volume, pi, raio, altura;

    pi = 3.14159;
    raio = 5;
    altura = 10;

    volume= pi *(raio*raio)*altura;

    printf("O volume da lata de oleo eh: %f", volume);


    return 0;
}
