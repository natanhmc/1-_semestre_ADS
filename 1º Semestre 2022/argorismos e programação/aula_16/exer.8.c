/*
Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos ˆ na ordem inversa. 
*/
#include<stdio.h>
int main(){
    int var[6];
    int i=0;
    int x=6;
    do{
        printf("digite um numero inteiro: ");
        scanf("%d%*c",&var[i]);
        i++;
    } while (i<6);
    for ( i = 5; i >= 0; i--){
        printf("o elemento %d do vetor e %d\n",x,var[i]);
        x--;
    }
    

}