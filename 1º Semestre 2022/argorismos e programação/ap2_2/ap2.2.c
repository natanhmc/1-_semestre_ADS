#include<stdio.h>
int main(){
    int y, i;
    for ( i = 1000; i < 2000 ; i++){
        if((i%11)==5){
            printf("%d dividido por 11 sobra 5\n",i);
        }    
    }
}