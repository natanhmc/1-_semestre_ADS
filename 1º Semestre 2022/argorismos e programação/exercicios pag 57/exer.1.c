#include <stdio.h>
#include <math.h>

int main(){
    float trab_lab, aval_sem, not_fim, media;
    printf("Digite a nota do trabalho de laboratorio: ");
    scanf("%f%*c",&trab_lab);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f%*c",&aval_sem);
    printf("Digite a nota do exame final: ");
    scanf("%f%*c",&not_fim);
    media=(trab_lab*2+aval_sem*3+not_fim*5)/10;
    if((media>=8) && (media<=10)){
        printf("Obteve conceito A");
    }else if((media>=7) && (media<8)){
        printf("Obteve conceito B");
    }else if((media>=6) && (media<7)){
        printf("Obteve conceito C");
    }else if((media>=5) && (media<6)){
        printf("Obteve conceito D");
    }else if((media>=0) && (media<5)){
        printf("Obteve conceito E");
    }else{
        printf("Valores invalidos");
    }
}