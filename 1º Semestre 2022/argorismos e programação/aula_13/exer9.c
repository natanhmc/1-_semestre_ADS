#include<stdio.h>
int main(){
    int n,i;
    printf("digite o numero da tabuada: ");
    scanf("%d%*c",&n);
    for(i=1;i<11;i++){
        printf("%d x %d = %d\n",i,n,(n*i));
    }
}