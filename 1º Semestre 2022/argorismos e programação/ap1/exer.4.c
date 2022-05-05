#include<stdio.h>
int main(){
    float num1, num2;
    printf("Insira um numero: ");
    scanf("%f%*c",&num1);
    printf("Digite o segundo numero: ");
    scanf("%f%*c",&num2);
    if(num1>num2){
        printf("o numero maior e %.2f",num1);
    }else if(num2>num1){
        printf("o numero maior e %.2f",num2);
    }else{
        printf("Os numeros sao iguais");
    }
    return 0;
}