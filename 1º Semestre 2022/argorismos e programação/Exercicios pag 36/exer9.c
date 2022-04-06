#include <stdio.h>
int main()
{
    float base, altura, area;
    printf("Informe a base do tringulo:");
    scanf("%f%*c",&base);
    printf("Informe a altura do triangulo:");
    scanf("%f%*c",&altura);
    area = (altura*base)/2;
    printf("A area do tringulo e:%.2f\n",area);
    return 0;
}