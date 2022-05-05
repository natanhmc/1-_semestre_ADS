#include<stdio.h>
int main(){
    float num1, num2, dife;
    printf("Insira um numero: ");
    scanf("%f%*c",&num1);
    printf("Digite o segundo numero: ");
    scanf("%f%*c",&num2);
    if(num1>num2){
        dife=num1-num2;
        printf("A diferenca e %.2f",dife);
    }else if(num2>num1){
        dife=num2-num1;
        printf("A diferenca e %.2f",dife);
    }else{
        printf("Os numeros sao iguais");
    }
    return 0;
}