#include<stdio.h>
#include<math.h>
int main()
{
    float kilo, grama;
    printf("informe seu peso em quilos: ");
    scanf("%f%*c",&kilo);
    grama = kilo*1000;
    printf("seu peso em gramas e: %.2f\n",grama);
    return 0;

}