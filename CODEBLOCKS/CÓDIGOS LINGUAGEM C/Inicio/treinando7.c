#include <stdio.h>
#include <math.h>

int main()
{
    /*testar incremento e decremento */
    int n = 5;
    int x, y;
    x = 2 * n++;
    printf("x: %d e n: %d \n", x, n);
    y = 2 * ++n;
    printf("x: %d e n %d \n", y, n);
    return 0;
}
