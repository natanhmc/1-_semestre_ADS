#include <stdio.h>
int main(){
    int num1, num2;

    do{
        printf("informe o primeiro valor: ");
        scanf("%d%*c",&num1);
        printf("informe o segundo valor: ");
        scanf("%d%*c",&num2);
        if(num1>num2){
            printf("decrescente\n");
        }else if(num2>num1){
            printf("crescente\n");
        }


    } while (num1!=num2);
    printf("numeros iguais invalidos");
}