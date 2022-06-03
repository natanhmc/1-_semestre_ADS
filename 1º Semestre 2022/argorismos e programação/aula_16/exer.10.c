/*
Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.
*/
#include<stdio.h>
int main(){
    float var[15],soma=0,media;
    int i=0,x=1;
    do{
        printf("informe a nota do %d aluno: ",x);
        scanf("%f%*c",&var[i]);
        soma+=var[i];
        i++;
        x++;
        
    } while (i<15);
    media=soma/15;
    printf("a media dos alunos e %.2f",media);
}