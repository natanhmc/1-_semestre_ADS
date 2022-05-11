#include<stdio.h>
int main(){
    int num, rest;
    printf("insira um numero inteiro: ");
    scanf("%d%*c",&num);
    rest=num%2;
    switch (rest){
    case 1:
        printf("o numero nao e par ");
        break;
    case 0:
        printf("o numero e par ");
        break;
    
    default:
        break;
    }
    return 0;
}