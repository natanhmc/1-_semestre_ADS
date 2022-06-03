#include<stdio.h>
int main(){
    int i, valor;
    i=0;
    int npar=0;
    int nimpar=0;
    do{
    printf("digite o valor inteiro:\n ");
    scanf("%d%*c",&valor);
     if(valor%2==0){
        printf("Numero par\n");
        npar++;
     }else{
        printf("Numero impar\n");
        nimpar++;
     }
     printf("\n----------------\n");
     i++;
    }while(i<10);
    printf("foram %d pares\n",npar);
    printf("foram %d impares\n",nimpar);

}