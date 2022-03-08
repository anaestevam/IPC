#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int bin, dec = 0, i;
    printf("Digite um numero binario: ");
    scanf("%d", &bin);

    for(i = 0; bin > 0; i++)
    {
        dec = dec + pow(2, i) * (bin % 10);
        bin = bin / 10;
    }
    printf("O numero decimal eh: %d", dec);
    return 0;
}
