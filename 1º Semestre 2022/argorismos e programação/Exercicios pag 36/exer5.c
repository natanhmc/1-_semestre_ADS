#include <stdio.h>
int main()
{
    float sal, perc, novosal, aument;

    printf("Digite o seu salario: ");
    scanf("%f%*c",&sal);

    printf("Digite a porcentagem de aumento: ");
    scanf("%f%*c",&perc);

    aument = sal*perc/100;

    novosal = aument+sal;

    printf("Voce teve um aumento de: %.2f\n",aument);

    printf("Seu novo salario e: %.2f\n",novosal);

    return 0;
}