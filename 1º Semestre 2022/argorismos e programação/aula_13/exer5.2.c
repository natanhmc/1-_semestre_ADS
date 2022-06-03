#include<stdio.h>
int main(){
    int n, i=0, soma=0;
    printf("insira um numero inteiro: ");
    scanf("%d%*c",&n);
    do{
    i++;
    soma+=i;
    } while (i<=n);
    
    printf("a soma dos numeros e %d",soma);
    
}