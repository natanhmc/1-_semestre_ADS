#include<stdio.h>
int main(){
    float nota1, nota2, media;
    printf("digite a primeira nota: ");
    scanf("%f%*c",&nota1);
    printf("digite a segunda nota: ");
    scanf("%f%*c",&nota2);
    media=(nota1+nota2)/2;
    printf("Sua media e: %.2f\n",media);
    if(media<4){
        printf("Reprovado");
    }else if((media>=4)&&(media<7)){
        printf("Exame");
    }else if((media>=7)&&(media<=10)){
        printf("Aprovado");
    }
    return 0;
}