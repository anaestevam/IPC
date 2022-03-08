#include <stdio.h>
#include <math.h>

int main()
{
    /*Testar incremento e decremento */
    int n = 5;
    int x,y;
    x = 3 * n++;
    printf("x: %d e n: %d \n", x, n);
    y = 3 * ++n;
    printf("x: %d e n: %d \n", x,n);
    return 0;
}
