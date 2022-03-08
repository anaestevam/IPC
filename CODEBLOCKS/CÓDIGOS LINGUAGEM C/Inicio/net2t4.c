#include<stdio.h>
#include<conio.h>
int main(){

   int num, n, m, c,d,u;

   printf("Digite um valor: ");
   scanf("%d", &num);

     /*   m=num/1000;

        num=num % 1000;

        c=num/100;

        num=num%100;

        d=num/10;

        u=num%10;*/


            if(num>5000 && num<9000){

                m=num/1000;

                num=num % 1000;

            if(num>100){

                 c=num/100;

                num=num%100;

          } if(num>10){
                d=num/10;

                u=num%10;
            }

            }else{
                printf("Digite outro valor!");
            }


    switch(m){

          case 5: printf(" Cinco mil ");
          break;
          case 6: printf(" Seis mil ");
          break;
          case 7: printf(" Sete mil ");
          break;
          case 8: printf(" Oito mil ");
          break;
          case 9: printf(" Nove mil ");
          break;
          }

        switch(c){

          case 1: printf(" cento ");
          break;
          case 2: printf(" duzentos ");
          break;
          case 3: printf(" trezentos ");
          break;
          case 4: printf(" quatrocentos ");
          break;
          case 5: printf(" quinhentos ");
          break;
          case 6: printf(" seiscentos ");
          break;
          case 7: printf(" setecentos ");
          break;
          case 8: printf(" oitocentos ");
          break;
          case 9: printf(" novecentos ");
          break;
          }

        switch(d){

          case 2: printf(" vinte ");
          break;
          case 3: printf(" trinta ");
          break;
          case 4: printf(" quarenta ");
          break;
          case 5: printf(" cinquenta ");
          break;
          case 6: printf(" sessenta ");
          break;
          case 7: printf(" setenta ");
          break;
          case 8: printf(" oitenta ");
          break;
          case 9: printf(" noventa ");
          break;
          }

        switch(num){

          case 0: printf(" dez ");
          break;
          case 1: printf(" onze ");
          break;
          case 2: printf(" doze ");
          break;
          case 3: printf(" treze ");
          break;
          case 4: printf(" quatorze ");
          break;
          case 5: printf(" quinze ");
          break;
          case 6: printf(" dezesseis ");
          break;
          case 7: printf(" dezessete ");
          break;
          case 8: printf(" dezoito ");
          break;
          case 9: printf(" dezenove ");
          break;
          }

        switch(u){

          case 1: printf(" um");
          break;
          case 2: printf(" dois");
          break;
          case 3: printf(" tres");
          break;
          case 4: printf(" quatro");
          break;
          case 5: printf(" cinco");
          break;
          case 6: printf(" seis");
          break;
          case 7: printf(" sete");
          break;
          case 8: printf(" oito");
          break;
          case 9: printf(" nove");
          break;
          }
     /* while(num>=5000 && num<=9000){

            if(num>5000 && num<9000){

                n= n%1000;

           }else if(num>100){
               m = n/100;
               n = n%100;

          }else  if(num>10){
              m = n/10;
              n = n%10;

            }else{
                printf("Digite outro valor!");
            }
            }*/


          getchar();

          return 0;
}
