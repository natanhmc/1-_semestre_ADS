#include <stdio.h>
int main()
{
    float sal, salreceb, imp;

    printf("Digite seu salario:");
    scanf("%f%*c",&sal);

    imp = sal*10/100;

    salreceb = sal+50-imp;

    printf("Seu salario a receber e:%.2f\n",salreceb);

    return 0;
}