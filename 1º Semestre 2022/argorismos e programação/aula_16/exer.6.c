/*
Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, 
deverá ser impresso o maior e o 
menor elemento do vetor. 
*/
#include<stdio.h>
int main(){
    float var[10],maior=0,menor=0;
    int i=0,x=1;
    do{
        printf("informe o %d numero: ",x);
        scanf("%f%*c",&var[i]);
        if (maior>var[i]){
            maior=var[i];
        
        }else if(menor<var[i]){
            menor=var[i];
        }
        i++;
        x++;
    } while (i<10);
    printf("o numero maior e %.2f\n",maior);
    printf("o numero menor e %.2f\n",menor);
}
