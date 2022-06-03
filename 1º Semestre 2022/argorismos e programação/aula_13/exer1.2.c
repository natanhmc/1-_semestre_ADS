#include<stdio.h>
int main(){
    int i=0;
    float cont, soma;
    do{
        printf("informe o numero %d",i);
        scanf("%f%*c",&cont);
        soma=soma+cont;
        i++;
    
    } while (i<=9);
    printf("a soma e %.2f",soma);
    
}