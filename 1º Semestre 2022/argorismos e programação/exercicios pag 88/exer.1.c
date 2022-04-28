#include<stdio.h>
int main(){
    float nota1, nota2, nota3, nota4, media;
    printf("Digite a primeira nota: ");
    scanf("%f%*c",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f%*c",&nota2);
    printf("Digite a terceira nota: ");
    scanf("%f%*c",&nota3);
    printf("Digite a quarta nota: ");
    scanf("%f%*c",&nota4);
    media=(nota1+nota2+nota3+nota4)/4;
    printf("A sua media e: %.2f\n",media);
    if(media>=7){
        printf("Parabens\n");
    }else{
        printf("Voce nao atingiu a media 7");
    }
    return 0;
}