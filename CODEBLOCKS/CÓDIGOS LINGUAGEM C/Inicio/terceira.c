#include <stdio.h>
#include <math.h>

int main()
{
    int centena, dezena, unidade, aux;
    centena = 4;
    dezena = 3;
    unidade = 2;
    printf("Digite o valor antes: %d \n", centena);
    printf("Digite o valor antes: %d \n", dezena);
    printf("Digite o valor antes: %d \n", unidade);

    if(unidade>centena){
    aux=centena;centena=unidade; unidade=aux;	}
     if(dezena>unidade){
    aux=dezena; dezena=unidade; unidade=aux;	}
    if(dezena>centena){
   	aux=centena; dezena=centena; dezena=aux;	}

    printf("Digite o valor depois: %d \n", centena);
    printf("Digite o valor depois: %d \n", dezena);
    printf("Digite o valor depois: %d \n", unidade);

    return 0;
}
