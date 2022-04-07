#include <stdio.h>
int main()
{
    float sal, salreceb, imp, grat;

    printf("Digite seu salario:");
    scanf("%f%*c",&sal);

    grat = sal*5/100;

    imp = sal*7/100;

    salreceb = sal+grat-imp;

    printf("Voce ira receber um salario de:%.2f\n",salreceb);

    return 0;
}