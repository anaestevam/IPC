#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){

    long int fat=1;
    int i;
    int num;

    printf("Digite valor: ");
    scanf("%d", &num);

    for(i=num; i>=1; i--){
    fat=fat*i;

    }
    printf("Resultado do fatorial: %d", fat);

    return 0;
}
