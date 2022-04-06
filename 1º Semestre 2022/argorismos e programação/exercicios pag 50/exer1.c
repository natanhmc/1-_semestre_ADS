#include<stdio.h>
#include<math.h>
int main()
{
    float num1, num2, result;

    printf("Digite o primeiro numero: ");
    scanf("%f%*c",&num1);

    printf("Digite o segundo numero: ");
    scanf("%f%*c",&num2);

    result = num1-num2;

    printf("A subtracao dos numeros e: %.f\n ",result);
    return 0;
}