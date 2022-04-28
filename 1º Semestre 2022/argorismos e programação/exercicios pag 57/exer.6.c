#include<stdio.h>
#include<math.h>

int main(){
    int num, r;
    printf("Digite um numero inteiro: ");
    scanf("%d%*c",&num);
    r = (num%2);
    if(r==0){
        printf("O numero %d e par.",num);
    }else{
        printf("O numero %d e impar.",num);
    }
    return 0;
}