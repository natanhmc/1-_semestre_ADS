#include<stdio.h>
int main(){
    int idade;
    printf("Insira a sua idade: ");
    scanf("%d%*c",&idade);
    if(idade>=18){
        printf("Voce e maior de idade ");
    }else{
        printf("Voce e menor de idade ");
    }
    return 0;
}