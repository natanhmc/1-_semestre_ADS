#include<stdio.h>
int main(){
    float n1, n2;
    printf("insira o primeiro numero: ");
    scanf("%f%*c",&n1);
    printf("insira o segundo numero: ");
    scanf("%f%*c",&n2);
    if(n1<n2){
        printf("o numero menor : %.2f",n1);
    }else{
        printf("o numero menor e: %.2f",n2);
    }
    return 0;
}