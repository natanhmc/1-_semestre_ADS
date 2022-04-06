#include <stdio.h>
#include<math.h>
int main()
{
    int nasc, ano, idad, an50;
    printf("Digite seu ano de nascimento: ");
    scanf("%d%*c",&nasc);
    printf("Digite oano atual: ");
    scanf("%d%*c",&ano);
    idad = ano-nasc;
    an50 = 2050-nasc;
    printf("Sua idade e: %d\n",idad);
    printf("Em 2050 voce tera : %d\n",an50);
    return 0;
}