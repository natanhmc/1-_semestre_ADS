#include<stdio.h>
int main(){
    float num1, num2, total;
    printf("Insira um numero: ");
    scanf("%f%*c",&num1);
    printf("Insira o sugundo numero: ");
    scanf("%f%*c",&num2);
    if(num1>=num2){
        total=num1+100;
        printf("O total e %.2f.",total);
    }else{
        total=num2+100;
        printf("O total e %.2f.",total);
    }
    return 0;

}