#include <stdio.h>
#include<math.h>
int main(){
        float num1, num2, op, quad1, quad2, cub1, cub2, elev;
    printf("Insira o primeiro numero: ");
    scanf("%f%*c", &num1);
    printf("Insira o segundo numero: ");
    scanf("%f%*c", &num2);
    printf("Opcoes: \n");
    printf("1-O primeiro eleveda ao sugundo\n");
    printf("2-Raiz quadrada de cada numero\n");
    printf("3-Raiz cubica de cada numero\n");
    printf("Sua escolha: ");
    scanf("%f%*c",&op);
    if(op==1){
        elev=(pow(num1,num2));
        printf("A elevacao doprimeiro pelo segundo e %.1f",elev);
    }else if(op==2){
        quad1=sqrt(num1);
        quad2=sqrt(num2);
        printf("A raiz quadrada dos numeros e %.1f e %.1f",quad1, quad2);
    }else if(op==3){
        cub1=pow(num1,3);
        cub2=pow(num2,3);
        printf("A raiz cubica dos numeros e %.1f e %.1f",cub1, cub2);
    }else{
        printf("Opcao invalida!");
    }
    return 0;
}