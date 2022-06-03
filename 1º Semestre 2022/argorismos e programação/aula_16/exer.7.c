/*
Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima  o vetor,
 o maior elemento e a posição em que ele se encontra. 
*/
#include<stdio.h>
int main(){
    float var[10],maior;
    int i=0,x=1;
    
    do{
        printf("insira o %d numero: ",x);
        scanf("%f%*c",&var[i]);
        x++;
        i++;
    } while (i<10);
    for ( i = 0; i < 10; i++){
        x=1;
        printf("o %d elemento do vetor e %.2f\n",x,var[i]);
        x++;
        if (maior>var[i]){
            maior=var[i];
            
        }
    }
    printf("o maior elemento do vetor %.2f\n",maior);   
}