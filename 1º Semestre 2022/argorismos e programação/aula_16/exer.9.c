/*
Crie um programa que lê 6 valores num vetor inteiros pares e, em seguida, mostre na tela os valores ˆ
 lidos na ordem inversa. 
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
        if (var[i]%2==0){
            printf("este numero e par %d\n",var[i]);
        }
    }
}