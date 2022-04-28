#include<stdio.h>
#include<math.h>

int main(){
    float num1, num2, raiz, soma, op;
    printf("Menu de Opcoes:\n");
    printf("1-Soma de dois numeros.\n");
    printf("2-Raiz quadrada de um numero.\n");
    printf("Digite a sua escolha: \n");
    scanf("%f%*c",&op);
    if(op==1){
        printf("Insira o primeiro numero: ");
        scanf("%f%*c",&num1);
        printf("Insira o segundo numero: ");
        scanf("%f%*c",&num2);
        soma = (num1+num2);
        printf("A soma dos numeros e %.1f",soma);
    }else if(op==2){
        printf("Insira o numero: ");
        scanf("%f%*c",&num1);
        raiz=sqrt(num1);
        printf("A raiz quadrada do numero e %.3f",raiz);
    }
    return 0;
}