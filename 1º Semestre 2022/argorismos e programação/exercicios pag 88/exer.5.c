#include <stdio.h>
#include<math.h>
int main()
{
    float num1, num2, op, media, difer, produ, div;
    printf("Insira o primeiro numero: ");
    scanf("%f%*c", &num1);
    printf("Insira o segundo numero: ");
    scanf("%f%*c", &num2);
    printf("Opcoes: \n");
    printf("1-Media entre os numeros\n");
    printf("2-Diferenca do maior pelo menor\n");
    printf("3-Produto entre os numeros digitados\n");
    printf("4-Divisao do primeiro pelo segundo\nPara escolha da opcao 4, os numeros devem ser diferente de 0.\n ");
    printf("Sua escolha: ");
    scanf("%f%*c",&op);
    if(op==1){
        media=(num1+num2)/2;
        printf("A media dos numeros e %.1f",media);
    }else if(op==2){
        if(num1>num2){
            difer=num1-num2;
            printf("A diferenca e de %.1f",difer);
        }else{
            difer=num2-num1;
            printf("A diferenca e de %.1f",difer);
        }
    }else if(op==3){
        produ=num1*num2;
        printf("O produto dos numeros e %.1f",produ);
    }else if(op==4){
        div=num1/num2;
        printf("A divisao do primeiro pelo sugundo e %.1f",div);
    }else{
        printf("Opcao invalida!");
    }
    return 0;
}