/*
 Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
 */
#include<stdio.h>
int main(){
    float var[10];
    int i=0,x=1,par=0;
    do{
        printf("informe o %d numero: ",x);
        scanf("%f%*c",&var[i]);
        if ((int)var[i] % 2 == 0){
            par++;
        }
        i++;
        x++;
    } while (i<10);
    printf("a quantidade de numeros pares e %d",par);
}