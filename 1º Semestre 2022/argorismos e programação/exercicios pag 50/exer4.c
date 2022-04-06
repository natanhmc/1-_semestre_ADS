#include<stdio.h>
#include<math.h>
int main()
{
    float num1, num2, media;
    printf("digite a nota 1: ");
    scanf("%f%*c",&num1);
    printf("digite a nota 2: ");
    scanf("%f%*c",&num2);
    media = (((num1*2)+(num2*3))/5);
    printf("o resultado e: %.2f\n",media);
    return 0;
}