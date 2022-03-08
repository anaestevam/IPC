#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
int main()
{
 float precoinicial, codigo, desconto;
 printf("Informe o preco do produto: ");
 scanf("%f",&precoinicial);
 printf("Informe o codigo do produto: ");
 scanf("%f", &codigo);

    if ( precoinicial < 100 ) {
  printf("\n Novo preco com desconto de 10%% e %2.f \n", precoinicial * 0.10);
    }else if (precoinicial>=100 && <200 ){
  printf("\n Novo preco com desconto de 17%% e %2.f \n", precoinicial * 0.17);
    }else if (precoinicial>=200 ){
  printf(" \nNovo preco com desconto de 20%% e %2.f \n", precoinicial * 0.20);
        }

 system("PAUSE");
 return 0;
}
