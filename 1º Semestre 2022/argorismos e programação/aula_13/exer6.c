#include<stdio.h>
int main(){
    int n,i;

    for ( i = 0; i < 5; i++)
    {
        printf("digite o numero: \n");
        scanf("%d%*c",&n);
        if(n==0){
            printf("numero nulo\n");
        }else if(n>0){
            printf("numro positivo\n");
        }else{
            printf("numero Negativo\n");
        }
    }
    

}