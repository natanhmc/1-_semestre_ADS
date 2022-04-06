#include <stdio.h>
#include <math.h>
int main()
{
    float pre_fab, perc_lucr, per_imp, val_dist, val_imp, p_fim;
    printf("Informe o preco de fabrica: ");
    scanf("%f%*c",&pre_fab);
    printf("Informe o precentual de lucro do distribuidor: ");
    scanf("%f%*c",&perc_lucr);
    printf("Informe o percentual de imposto : ");
    scanf("%f%*c",&per_imp);
    val_dist = pre_fab*perc_lucr/100;
    val_imp = pre_fab*per_imp/100;
    p_fim = pre_fab+val_dist+val_imp;
    printf("O valor do lucro de distriduicao e: %.3f\n",val_dist);
    printf("O valor dos impostos e: %.3f\n",val_imp);
    printf("O preco final e : %.3f\n",p_fim);
    return 0;
}