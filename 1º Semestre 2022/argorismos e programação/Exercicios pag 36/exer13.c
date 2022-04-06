#include <stdio.h>
#include <math.h>
int main()
{
    float jard, pes, milh, poleg;
    printf("Insira uma medida em pes: ");
    scanf("%f%*c",&pes);
    poleg = pes*12;
    jard = pes/3;
    milh = pes/5280;
    printf("A medida informada equivale a: %.2f polegadas.\n",poleg);
    printf("A medida informada equivale a: %.2f jardas.\n",jard);
    printf("A medida informada equivale a: %.4f milhas.\n",milh);
    return 0;
}