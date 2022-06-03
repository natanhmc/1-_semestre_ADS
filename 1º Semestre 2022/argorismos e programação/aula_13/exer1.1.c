#include<stdio.h>
int main(){
    float cont, total;
    total=0;
    for (int i = 1; i <=10; i++){
        printf("informe um numero %d : ",i);
        scanf("%f%*c",&cont);
        total=total+cont;
    }
    printf("a soma dos numeros e %.2f",total);
    

}