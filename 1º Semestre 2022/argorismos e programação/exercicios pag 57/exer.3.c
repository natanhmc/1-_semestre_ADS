#include <stdio.h>
int main()
{

    float num1, num2;
    printf("digite o primeiro numero: ");
    scanf("%f%*c",&num1);
    printf("digite o segundo numero: ");
    scanf("%f%*c",&num2);
    if(num1>num2){
        printf("O numero %.f e maior.",num1);
    }else if(num1==num2){
        printf("Os numeros sao iguais.");
    }else{
        printf("O numero %.f e maior.",num2);
    }
}