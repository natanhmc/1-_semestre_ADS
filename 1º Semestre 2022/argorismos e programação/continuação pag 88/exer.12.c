#include<stdio.h>
int main(){
    float sal, novo_sal;
    printf("Insira seu salario bruto: ");
    scanf("%f%*c",&sal);
    if(sal<=350){
        novo_sal=(sal-(sal*0.07))+100;
        printf("Seu novo salario e %.2f",novo_sal);
    }else if((sal>350)&&(sal<=600)){
        novo_sal=(sal-(sal*0.07))+75;
        printf("Seu novo salario e %.2f",novo_sal);
    }else if((sal>600)&&(sal<=900)){
        novo_sal=(sal-(sal*0.07))+50;
        printf("Seu novo salario e %.2f",novo_sal);
    }else if(sal>900){
        novo_sal=(sal-(sal*0.07))+35;
        printf("Seu novo salario e %.2f",novo_sal);
    }else{
        printf("Valores incorretos!!");
    }
    return 0;
}