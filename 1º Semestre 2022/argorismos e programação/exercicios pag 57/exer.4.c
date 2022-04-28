#include <stdio.h>

int main(){
    float num1, num2, num3;
    printf("digite o primeiro numero: ");
    scanf("%f%*c",&num1);
    printf("digite o segundo numero: ");
    scanf("%f%*c",&num2);
    printf("digite o terceiro numero: ");
    scanf("%f%*c",&num3);
    if((num1<=num2) && (num2<=num3) && (num1<=num3)){
        printf("A ordem crescente e:%f, %f, %f. ", num1, num2, num3);
    }else if((num1<=num3) && (num3<=num2) && (num1<=num2)){
        printf("A ordem crescente e: %f, %f, %f.",num1, num3, num2);
    }else if((num2<=num1)&&(num1<=num3)&&(num2<=num3)){
        printf("A ordem crescente e: %f, %f, %f.", num2, num1, num3);
    }else if((num2<=num3)&&(num3<=num1)&&(num2<=num1)){
        printf("A ordem crescente e: %f, %f, %f.", num2, num3, num1);
    }else if((num3<=num1)&&(num1<=num2)&&(num3<=num2)){
        printf("A ordem crescente e: %f, %f, %f.", num3, num1, num2);
    }else if((num3<=num2)&&(num2<=num1)&&(num3<=num1)){
        printf("A ordem crescente e: %f, %f, %f.", num3, num2, num1);
    }
    return 0;
}