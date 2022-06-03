/*
2. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.
*/
#include<stdio.h>
int main(){
    int var[6];
    int i=0;
    int x=1;
    do{
        printf("digite um numero inteiro: ");
        scanf("%d%*c",&var[i]);
        i++;
    } while (i<6);
    for (i = 0; i < 6; i++){
        printf("o %d valor lido foi %d\n",x,var[i]);
        x++;
    }
       
}