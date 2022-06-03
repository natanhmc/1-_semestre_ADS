#include<stdio.h>
int main(){
    int n, i=1, soma=0;

    printf("insira um numero inteiro: ");
    scanf("%d%*c",&n);
    while (i<=n){
        soma=i+soma;
        i++;
         
    }
    
    printf("a soma dos numeros e %d",soma);
    
}