#include<stdio.h>
#include<math.h>
int main()
{
    float preco, novopreco;
    printf("digite o preco: ");
    scanf("%f%*c",&preco);
    novopreco = preco*90/100;
    printf("o novo preco e: %.2f\n",novopreco);
    return 0;
}