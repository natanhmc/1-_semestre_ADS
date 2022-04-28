#include <stdio.h>
#include <math.h>

int main(){
    float nota_1, nota_2, nota_3, media, exame;
    printf("digite a nota 1: ");
    scanf("%f%*c",&nota_1);
    printf("digite a nota 2: ");
    scanf("%f%*c",&nota_2);
    printf("digite a nota 3: ");
    scanf("%f%*c",&nota_3);
    media=(nota_1+nota_2+nota_3)/3;
    if((media>=0) && (media<3)){
        printf("voce foi reprovado");
    }else if((media>=3) && (media<7)){
        printf("Exame\n");
        exame = 13-media;
        printf("Deve tirar nota %.2f para ser aprovado",exame);
    }else if((media>=7) && (media<=10)){
        printf("Voce foi aprovado\n  Parabens");
    }else{
        printf("Valores Invalidos");
    }
}