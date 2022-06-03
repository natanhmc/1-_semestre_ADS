#include<stdio.h>
int main(){
    int matricula,i;
    char nome[10];
    float nota1, nota2, nota3, media;
    for ( i = 0; i < 10; i++){
    printf("digite o nome: ");
    scanf("%s%*c",&nome);
    printf("digite o matricula: ");
    scanf("%d%*c",&matricula);
    printf("digite o nota 1: ");
    scanf("%f%*c",&nota1);
    printf("digite o nota 2: ");
    scanf("%f%*c",&nota2);
    printf("digite o nota 3 : ");
    scanf("%f%*c",&nota3);
    media=nota1+nota2+nota3/3;
    if(media>=7){
        printf("o aluno %s matricula %d foi aprovado",nome, matricula);

    }else{
        printf("o aluno %s matricula %d nao foi aprovado",nome, matricula);

    }
    }
}