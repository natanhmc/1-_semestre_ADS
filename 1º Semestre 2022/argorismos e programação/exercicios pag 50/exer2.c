#include<stdio.h>
#include<math.h>
int main()
{
    int num1, num2, num3, result;
    printf("Digite o numero 1: ");
    scanf("%d%*c",&num1);
    printf("Digite o numero 2: ");
    scanf("%d%*c",&num2);
    printf("Digite o numero 3: ");
    scanf("%d%*c",&num3);
    result = num1*num2*num3;
    printf("O resultado da multiplicacao e: %.2d\n",result);
    return 0;
}