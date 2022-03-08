#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){

    float distancia, velocidade, tempo, litros_usados;

    tempo = 2; //duas horas
    velocidade = 80;  //km

    distancia = tempo * velocidade;

    litros_usados = distancia/12;

    printf("Velocidade media: %.2f \n", velocidade);
    printf("Tempo gasto: %.2f \n", tempo);
    printf("Distancia percorrida: %.2f \n", distancia);
    printf("Litros usados: %f \n", litros_usados);


    return 0;
}
