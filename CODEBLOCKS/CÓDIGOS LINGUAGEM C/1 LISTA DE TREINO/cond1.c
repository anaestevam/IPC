#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int num1, num2, num3, ordem;

    printf("Digite numero: ");
    scanf("%d", &num1);
    printf("Digite numero: ");
    scanf("%d", &num2);
    printf("Digite numero: ");
    scanf("%d", &num3);

    if(num1>num2 && num1>num3){
        if(num3>num2){
         printf("%d %d %d", num1, num2, num3);
        }else{
            printf("%d %d %d", num1, num3, num2);
        }
    }
    if(num2>num1 && num2>num3){
        if(num1>num3){
            printf("%d %d %d",num2, num1, num3);
        }else{
            printf("%d %d %d",num2, num3, num1);
        }
    }
    if(num3>num1 && num3>num2){
        if(num1>num2){
            printf("%d %d %d", num3, num1, num2);
        }else{
            printf("%d %d %d", num3, num2, num1);
        }
    }

    return 0;
}
