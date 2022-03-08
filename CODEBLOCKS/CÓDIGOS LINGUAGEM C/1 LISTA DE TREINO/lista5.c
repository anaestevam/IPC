#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int celsus, f;

    printf("Digite a temperatura em Celsus: ");
    scanf("%d", &celsus);

    f = (9 * celsus + 160)/5;

    printf("Em Fahrenheit eh: %d", f);

    return 0;
}
