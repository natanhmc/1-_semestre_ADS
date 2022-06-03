#include<stdio.h>
int main(){

    int i;
    float nota, media,soma;
    soma=0;
    i=0;
    do{
        printf("digite a nota %d\n",i+1);
        scanf("%f%*c",&nota);
       
        if(nota>=0){
            soma=soma+nota;
            i++;
        }else{
            break;
        }
        
    } while (nota>=0);
    media=soma/i;
    printf("a media e %.2f\n",media);
    printf("foram lidos %d\n",i);
}