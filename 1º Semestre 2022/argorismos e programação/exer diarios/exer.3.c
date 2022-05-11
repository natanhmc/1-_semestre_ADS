#include<stdio.h>
int main(){
    int num1, div;
    printf("insira um numero inteiro: ");
    scanf("%d%*c",&num1);
    div=num1 % 5;
    if(div==0){
        printf("multiplo de 5 ");
    }else{
        printf("Nao e multiplo de 5");
    }
    return 0;
    
}