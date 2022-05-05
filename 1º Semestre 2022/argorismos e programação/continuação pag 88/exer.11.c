#include<stdio.h>

int main(){
    float sal, novo_sal;
    printf("Insira seu salario atual: ");
    scanf("%f%*c",&sal);
    if(sal<=300){
        novo_sal=(sal*0.15)+sal;
        printf("Seu novo salario e %.2f",novo_sal);
    }else if((sal>300)&&(sal<=600)){
        novo_sal=(sal*0.10)+sal;
        printf("Seu novo salario e %.2f",novo_sal);
    }else if((sal>600)&&(sal<=900)){
        novo_sal=(sal*0.05)+sal;
        printf("Seu novo salario e %.2f",novo_sal);
    }else if(sal>900){
        printf("Voce nao se enquadra no perfil para receber aumento");
    }else{
        printf("Valores incorretos!!");
    }
    return 0;

}