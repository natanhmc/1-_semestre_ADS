#include<stdio.h>
int main(){
    int num1, num2 ;

    printf("informe o primeiro numero: ");
    scanf("%d%*c",&num1);
    printf("informe o segundo numero: ");
    scanf("%d%*c",&num2);
    while (num1<=num2){
        if((num1%2)!=0){
            printf("o numero %d e impar \n",num1);
        }
    num1++;
    }
    
}