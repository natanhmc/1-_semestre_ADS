#include<stdio.h>
int main(){
    float cont=0, media;
    float nota;
    
    for (int i = 1; i <=10; i++){

        printf("informe a nota do aluno %d: ",i);
        scanf("%f",&nota);
        cont+=nota;
    }
    
    media=cont/10;
    
    printf("a media dos alunos e %.2f",media);
    
}