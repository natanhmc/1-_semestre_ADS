#include<stdio.h>
#include<math.h>
int main()
{
    float num1, num2, result;
    printf("digite um nunero: ");
    scanf("%f%*c",&num1);
    printf("digite um numero maior que zero: ");
    scanf("%f%*c",&num2);
    result = num1/num2;
    printf("o resultado e: %.2f\n",result);
    return 0;
}