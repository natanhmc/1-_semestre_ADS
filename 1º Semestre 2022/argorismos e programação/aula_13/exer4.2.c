#include<stdio.h>
int main(){
    float cont=0, media;
    float nota;
    int i=0;
    do{
        printf("informe a nota do aluno %d: ",i+1);
        scanf("%f",&nota);
        i++;
        cont+=nota;
    } while (i<10);
    media=cont/10;
    printf("a media final e %.2f",media);
    
}