#include<stdio.h>
int main(){
    int num1, num2, num3, num4;
    printf("digite o primeiro numero: ");
    scanf("%d%*c",&num1);
    printf("digite o segundo numero: ");
    scanf("%d%*c",&num2);
    printf("digite o terceiro numero: ");
    scanf("%d%*c",&num3);
    printf("digite o quarto numero: ");
    scanf("%d%*c",&num4);
    if((num1%2==0)&&(num1%3==0)){
        printf("o primeiro numero e multiplo de 2 e 3\n");
    }else{
       printf("o primeiro numero nao e multiplo de 2 e 3\n"); 
    }
    if((num2%2==0)&&(num2%3==0)){
        printf("o segundo numero e multiplo de 2 e 3\n");
    }else{
       printf("o segundo numero nao e multiplo de 2 e 3\n"); 
    }
    if((num3%2==0)&&(num3%3==0)){
        printf("o terceiro numero e multiplo de 2 e 3\n");
    }else{
       printf("o terceiro numero nao e multiplo de 2 e 3\n"); 
    }
    if((num4%2==0)&&(num4%3==0)){
        printf("o quarto numero e multiplo de 2 e 3\n");
    }else{
       printf("o quarto numero nao e multiplo de 2 e 3\n"); 
    }
    return 0;

}