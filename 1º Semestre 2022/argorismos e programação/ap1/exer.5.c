#include<stdio.h>
int main(){
    int num1, num2;
    printf("Insira um numero inteiro: ");
    scanf("%d%*c",&num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d%*c",&num2);
    if(num1%2 == 0){
        printf("O numero %d e multiplo de 2\n",num1);
    }else{
        printf("O numero %d nao e multiplo de 2\n",num2);
    }
    if(num2%2 == 0){
        printf("O numero %d e multiplo de 2\n",num2);
    }else{
        printf("O numero %d nao e multiplo de 2\n",num2);
    }
}