#include<stdio.h>
int main()
{
    float ang, alt, escada, radiano;
    printf("Digite o angulo de escada: ");
    scanf("%f%*c",&ang);
    printf("Digite a altura que a escada esta: ");
    scanf("%f%*c",&alt);
    radiano = ang*3,14/180;
    escada = alt/sin(radiano);
    printf("O comprimento da escada e de : %.2f\n",escada);
    return 0;
}