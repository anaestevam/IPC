#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
//declarei
    int bin, i;
//dec que vai ser o numero que vai come�ar com 0
//pq dec que vai ser o valor que vai imprimir
    int dec=0;

//pedi o valor
    printf("Digite numero binario: ");
    scanf("%d", &bin);
//O FORMATO DE FOR
//TEM O VALOR INICIALDE QUAL VAI SER O CONTADOR NO CASO I
//DEPOIS A CONDI��O QUE O NUM BIN VAI TER QUE SER MAIOR QUE ZERO
//E INCREMENTAR O CONTADOR, POIS VAI ACONTECER AQUILO DE
// VALOR * 2^0 (DOIS ELEVADO A 0)
// VALOR * 2^1 (DOIS ELEVADO A 1)
//QUE I VAI FAZER A FUN��O DE CONTADOR (VAI SER OS NUMEROS ELEVADOS)
    i = 0;
    while(bin > 0){

// DEC(O NUMERO DECIMAL) VAI SER TRANSFORMADO NESSA FORMULA
        dec = dec + pow(2, i) * (bin % 10);
//BIN (O NUMERO BINARIO) DIVIDINDO POR 10
//N�O SEI EXPLICAR DIREITO PQ EU PEGUEI ESSAS ORIENTA��ES DO LIVRO
        bin = bin / 10;
        i++;
    }
//PEDI PRA IMPRIMIR O VALOR DA FORMULA
    printf("O numero decimal eh: %d", dec);

    return 0;
}
