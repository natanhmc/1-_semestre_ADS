#include<stdio.h>
#include<math.h>
int main()
{
    float sal, vendas, comic, novosal;
    printf("digite seu salario: ");
    scanf("%f%*c",&sal);
    printf("diga o valor de vendas: ");
    scanf("%f%*c",&vendas);
    comic = vendas*4/100;
    novosal = comic+sal;
    printf("o valor de comicao e: %.2f\n",comic);
    printf("o novo salario e: %.2f\n",novosal);
    return 0;

}