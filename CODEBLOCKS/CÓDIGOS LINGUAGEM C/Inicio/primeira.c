#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);


     if (valor/10) {
       printf("Eh divisivel por 10 \n");
      } else if( valor/4){
        printf("Eh divisivel por 4 \n");
       }
       else if( valor/3){
        printf("Eh divisivel por 3 \n");

    }else {
     printf("Nao eh divisivel por nenhum desses!!");
    }

    return 0;
}
