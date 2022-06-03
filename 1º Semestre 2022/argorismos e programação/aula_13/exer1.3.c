#include<stdio.h>
int main (){
    int i=0;
    float soma, cont;
    while (i<=10){
        printf("informe o numero %d :",i);
        scanf("%f%*c",&cont);
        soma=soma+cont;
        i++;
    }
    printf("a soma dos numeros e %.2f",soma);
    

}