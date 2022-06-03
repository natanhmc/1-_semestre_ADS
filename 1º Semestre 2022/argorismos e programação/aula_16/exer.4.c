/*
 Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer 
 correspondentes a duas posições no vetor. Ao final, seu programa deverá escrever a soma dos valores 
 encontrados nas respectivas posições  X e Y . 
 */
#include<stdio.h>
int main(){
    float var[8],soma;
    int i=0,x=0;
    int y[2];

    do{
        printf("informe o %d valor: ",x);
        scanf("%f%*c",&var[i]);
        i++;
        x++;
    } while (i<8);
    for ( x = 0; x < 2; x++){
        printf("informe a posicao do valor para somar: ");
        scanf("%d%*c",&y[x]);
    }
    soma=var[y[0]]+var[y[1]];
    printf("a soma dos numeros nas posicoes %d e %d e %.2f",y[0],y[1],soma);

    

    
}