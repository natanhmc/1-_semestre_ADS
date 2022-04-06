#include<stdio.h>
#include<math.h>
int main()
{
    float peso, emagre, engord;
    printf("informe seu peso: ");
    scanf("%f%*c",&peso);
    engord = peso+(peso*15/100);
    emagre = peso-(peso*20/100);
    printf("se engordar seu peso sera: %.2f\n",engord);
    printf("se emagrecer seu peso sera: %.2f\n",emagre);
}