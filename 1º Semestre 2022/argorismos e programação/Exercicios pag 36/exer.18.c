#include<stdio.h>
int main()
{
    float pesosaco, racaogato1, racaogato2, pesofinal;
    printf("Informe o peso do saco: ");
    scanf("%f%*c",&pesosaco);
    printf("Informe quanto o gato 1 come diariamente: ");
    scanf("%f%*c",&racaogato1);
    printf("Informe quanto o gato 2 come diariamente: ");
    scanf("%f%*c",&racaogato2);
    racaogato1 = racaogato1/1000;
    racaogato2 = racaogato2/1000;
    pesofinal = pesosaco-5*(racaogato1+racaogato2);
    printf("O peso de racao al final de 5 dias e de: %.3f\n",pesofinal);
    return 0;
}