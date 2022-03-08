#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c, cont;
    a=b=1;
    printf("%d %d ", a, b);
    cont=3;

   for(c=a+b; cont<=10; cont++){

    printf(" %d ", c);
    a=b;
    b=c;
    c=a+b;
   }

    return 0;
}
