#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(void){
    int idade;
    char analf[5];
    printf("voce e analfabeto(sim ou nao)? ");
    scanf("%s%*c",analf);
    if(strcmp(analf,"sim")==0){
        printf("voce nao tem obrigacao de votar\n");
    }else{
        printf("informe sua idade: ");
        scanf("%d%*c",&idade);
        if(((idade>=16)&&(idade<18))||(idade>70)){
            printf("Seu voto e facultativo .");
        }else if(idade<16){
            printf("Voce nao pode votar pois ainda e menor de idade.");
        }else if((idade>=18)&&(idade<=70)){
            printf("voce e maior de idade e precisa votar");
        }
    }
    return 0;
}