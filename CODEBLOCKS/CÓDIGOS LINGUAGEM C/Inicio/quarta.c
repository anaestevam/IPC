#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tempo, horas, h_min, h_seg, minutos, segundos;
    h_min = 60;
    h_seg = 3600;
    printf("Digite os minutos do seu dia: ", minutos);
    scanf("%d", &tempo);

    horas = (tempo/h_min);
    minutos = (tempo - (h_min*horas))/60;
    segundos = (tempo - (h_seg*horas) - (minutos*60));

    printf(" %d horas :\n %d minutos :\n %d segundos \n ", horas, minutos, segundos);

    system("PAUSE");
    return 0;
}
