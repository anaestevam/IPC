#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
      int qtde[1][150],i,j,valor[4],x,total[4],mr,i2,j2,menorestoque,i3,j3,c[1], A;
      mr=0;
      menorestoque=9999;

      printf("Valor de a: ");
      scanf("%d", &A);
      //Zerando os vetores//
     for(x=0;x<A;x++)
      {
                       valor[x]=0;
                       total[x]=0;
                       }
      for(x=0;x<1;x++)
      {
                       c[x]=0;
                       }
      //----------------------//




      //preenchendo o vetor//

      for(x=0;x<A;x++)
      {
                       printf("\nDigite o valor do produto %d:\t",x+1);
                       scanf("%d",&valor[x]);
                       }
       //------------------//


       //preenchendo a matriz//
       for(i=0;i<1;i++)
       {
                       for(j=0;j<4;j++)
                       {
                                        printf("\nDigite a quantidade do produto %d:\t",j+1);
                                        scanf("%d",&qtde[i][j]);
                                        }
                                        }
       //------------------//

       //Calculando e imprimindo o item 1//
    //   system("cls");
       for(i=0;i<1;i++)
       {
                       for(j=0;j<4;j++)
                       {
                                        printf("\nQuantidade do produto %d no armazem %d:\t%d",j+1,i+1,qtde[i][j]);
                                        }
                                        }
       //--------------------------------//

       //Calculando e imprimindo o item 2//
       x=0;
        for(j=0;j<4;j++)
        {
                       for(i=0;i<1;i++)
                       {
                                       total[x]=total[x]+qtde[i][j];

                                       }
                                       x++;
                                       }
        printf("\n\n");
        for(x=0;x<4;x++)
        {
                         printf("\nTotal do produto %d nos 5 Armazens:\t%d",j+1,total[x]);
                         }
        //-------------------------------//


        //Calculando e imprimindo o item 3//

        for(j=0;j<4;j++)
        {
                       for(i=0;i<1;i++)
                       {
                                        if(qtde[i][j]>mr)
                                        {
                                                      mr=qtde[i][j];
                                                      i2=i;
                                                      j2=j;
                                                      }
                                                      }
                                                      }
        printf("\n\nProduto: %d    Quantidade: %d   Preco: %dR$",j2+1,mr,valor[i2]);
        //---------------------------------------//

        //Calculando e imprimindo o item 4//
        for(j=0;j<4;j++)
        {
                       for(i=0;i<1;i++)
                       {
                                        if(qtde[i][j]<menorestoque)
                                        {
                                                      menorestoque=qtde[i][j];
                                                      i3=i;
                                                      j3=j;
                                                      }
                                                      }
                                                      }
        printf("\n\nMenor estoque armazenado:\nProduto: %d   Quantidade: %d   preco %dR$",j3+1,menorestoque,valor[i3]);
        //--------------------------------------//

        //Calculando e imprimindo o item 5//
        x=0;
        for(i=0;i<1;i++)
        {
                       for(j=0;j<4;j++)
                       {
                                        c[x]=c[x]+(qtde[i][j]*valor[j]);
                                        }
                                        printf("\nValor do armazem %d:   %dR$",i+1,c[x]);
                                        x++;
                                        }
        //---------------------------------//
        getch();
        }
