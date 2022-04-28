#include<stdio.h>
#include<math.h>
int main(){
    float num1, num2, num3, num4;
    printf("digite 3 numeros em ordem crescente: ");
    scanf("%f%f%f",&num1,&num2,&num3);
    printf("Digite um numero fora de ordem: ");
    scanf("%f%*c",&num4);
    if(num4>num3){
        printf("A ordem decrescente e %.1f, %.1f, %.1f e %.1f.",num4, num3, num2, num1);
    }else if((num4<num3)&&(num4>num2)){
        printf("A ordem decrescente e %.1f, %.1f, %.1f e %.1f.",num3, num4, num2, num1);
    }else if((num4<num2)&&(num4>num1)){
        printf("A ordem decrescente e %.1f, %.1f, %.1f e %.1f.",num3, num2, num4, num1);
    }else if(num4<num1){
        printf("A ordem decrescente e %.1f, %.1f, %.1f e %.1f.",num3, num2, num1, num4);
    }else{
        printf("Os numeros sao invalidos.");
        return 5;
    }
}