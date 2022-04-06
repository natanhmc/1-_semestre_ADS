#include<stdio.h>
int main()
{
    float alt_degr, alt_usua, qnt_degr;
    printf("Informe a altura do degral: ");
    scanf("%f%*c",&alt_degr);
    printf("Diga a altura desejada: ");
    scanf("%f%*c",&alt_usua);
    qnt_degr = alt_usua/alt_degr;
    printf("A quantidade de degrals nescessaria e de: %.2f\n",qnt_degr);
    return 0;
}