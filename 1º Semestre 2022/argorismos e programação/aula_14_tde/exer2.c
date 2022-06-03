#include <stdio.h>
int main()
{
    int n;

    do
    {
        printf("digite o valor testado\n");
        scanf("%d%*c", &n);
        if (n > 0){
            printf("valor positivo\n");
        }else if (n < 0){
            printf("valor negativo\n");
        }
        
    }while (n != 0);
}