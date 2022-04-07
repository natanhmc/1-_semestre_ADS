#include <stdio.h>
#include <math.h>

int main()
{
    int num1, num2, r1, r2;

    printf("Escreva um munero maior que zero: ");
    scanf("%d%*c",&num1);

    printf("Escreva outro munero maior que zero: ");
    scanf("%d%*c",&num2);

    r1 = pow(num1,num2);

    r2 = pow(num2,num1);

    printf("O primeiro numero elevado ao segundo e: %.2d\n",r1);
    printf("O segundo numero elevado ao primeiro e: %.2d\n",r2);

    return 0;
}