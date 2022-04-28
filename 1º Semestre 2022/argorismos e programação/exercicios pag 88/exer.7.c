#include <stdio.h>
#include<math.h>
int main(){
    float sal, aument;
    printf("Informe seu salario: ");
    scanf("%f%*c",&sal);
    if(sal<500){
        aument=(sal*0.30)+sal;
        printf("Seu novo salario e de %.2f",aument);
    }else{
        printf("Voce nao se enquadra no perfil para reseber o aumento.");
    }
    return 0;

}