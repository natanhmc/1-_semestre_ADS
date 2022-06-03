#include <stdio.h>
int main()
{
    int n;

    do
    {
        printf("digite o valor testado\n");
        scanf("%d%*c", &n);
        if (n<=0){
            break;

        }else{
            if(n%2==0){
                printf("numero par \n");
            }else{
                printf("numero impar\n");
            }
        }
       
        
    }while (n>0);
}