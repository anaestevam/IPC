#include<stdio.h>
#include<conio.h>
int main(){
//declarando num=numero digitado
//m =usando em milhar
//c = usando as centenas
//d= dezena
//u= unidades
   int num, m, c,d,u;
//solicitei o numero pra começar a brincadeira
   printf("Digite um valor: ");
   scanf("%d", &num);

//esse if é pra limitar o valor como pede na questão
            if(num>=5000 && num<=7000){
    //eu declarei que m vai receber o numero dividido por 1000
    // ex: 5000/1000 = 5 que vai ser usado no switch (M)
    // NO CASO VAI APARECER O CASE'5'= CINCO MIL
            //ESSE VAI DIVIDIR E ENTREGAR O VALOR A M
                m=num/1000;
            //ESSE VAI PEGAR O RESTO DE NUM, TRAZENDO NUM A APARECER
            //PRIMEIRO E SENDO O VALOR EM MILHAR
            //NUM= SENDO NUMERO MILHAR
                num=num%1000;


    //UTILIZANDO AS CENTENAS
    //QUALQUER NUMERO MAIOR QUE 100 E MENOR DE QUE MIL
    //PQ TIVE MEDO DE SAIR UM BUG E NO CASO MAIOR QUE 100
    //PODIA ENTENDER COMO QUE FOSSE ATÉ 9000
            if(num>=100 && num<1000){
    //DO MESMO JEITO QUE O COMENTÁRIO DE CIMA
    //CENTENA VAI RECEBER O VALOR DIVIDO POR 100
                 c=num/100;
    // NUMERO, VAI SER O RESTO DO NUMERO POR 100
    //EX: 500/100= 5 USADO NO SWITCH (C), NO CASE QUE
    //TIVER O NUMERO 5
                num=num%100;

    //DO MERMO JEITO
    //SE ENTENDEU ME CONTA PQ AQUI EU JÁ CANSEI
          } if(num>=10 && num<100){
                d=num/10;
                u=num%10;
            }
    //ELSE PARA NÃO VER NENHUM OUTRO VALOR
    //QUE NÃO FOR ENTRE 5000 E 9000
    //EX: 150
    //VAI APARECER ESSE PRINTF AI
    //SE APARECER DEPOIS OITOCENTOS EU ACHO QUE É UM BUG PQ NÃO FAÇO IDEIA DESSE ERRO
            }else{
                printf("Digite outro valor!");
            }

//VAI USAR OS SWITCHS APARTIR DA DECLARAÇÃO DOS VALORES
//SE FOR MILHAR E 5 VAI APARECER O PRIMEIRO PRINTF
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
//SE FAZER AQUELA DIVISÃO LÁ E FOR CENTENA
//VAI APARECER DE ACORDO COM O NUMERO
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
//DEZENA DO MESMO JEITO

        switch(d){

          case 1: printf(" dez ");
          break;
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

//IMPRIMIR O NUMERO SE CASO COLOQUE O VALOR 5210
// VAI APARECER DEZ
// ESSA PARTE DE DEZOITO SEM O DEZ E O OITO TO TENTANDO DESVENDAR
//PARA NÃO APARECER DEZ E OITO
//MAIS O IMPORTANTE É QUE TA SAINDO O VALOR
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
//IMPRIME A UNIDADE

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
// ESSE CARINHA QUE FAZ MOSTRAR NA TELA
          getch();

          return 0;
}
