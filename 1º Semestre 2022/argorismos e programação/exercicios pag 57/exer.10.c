#include<stdio.h>
int main(){
    int dia1, dia2, mes1, mes2, ano1, ano2;
    printf("Digite a primeira data: ");
    scanf("%d%d%d",&dia1,&mes1,&ano1);
    printf("Digite a segunda data: ");
    scanf("%d%d%d",&dia2,&mes2,&ano2);
    if(ano1>ano2){
        printf("a data %d/%d/%d e maior",dia1, mes1, ano1);
    }else if(ano2>ano1){
         printf("a data %d/%d/%d e maior",dia2, mes2, ano2);
    }else if(mes1>mes2){
         printf("a data %d/%d/%d e maior",dia1, mes1, ano1);
    }else if(mes2>mes1){
         printf("a data %d/%d/%d e maior",dia2, mes2, ano2);
    }else if(dia1>dia2){
         printf("a data %d/%d/%d e maior",dia1, mes1, ano1);
    }else if(dia2>dia1){
         printf("a data %d/%d/%d e maior",dia2, mes2, ano2);
    }else{
         printf("as datas sao iguais");
    } 
    return 0;
}