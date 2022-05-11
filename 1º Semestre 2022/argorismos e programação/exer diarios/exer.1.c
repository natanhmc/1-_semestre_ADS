#include<stdio.h>
int main(){
    int idade, div;
    printf("Insira a sua idade: ");
    scanf("%d%*c",&idade);
    if(idade>=18){
        printf("Voce ja pode frequentar o Clube dos Coroas ");
    }else if(idade<18){
        div=18-idade;
        printf("Voce e menor de idade, falta %d para voce ser maior ",div);
    }
    return 0;
}