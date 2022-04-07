#include <stdio.h>
#include <math.h>
int main()
{
    float salar, cheq1, cheq2, cpmf1, cpmf2, saldo;
    printf("Informe o seu deposito: ");
    scanf("%f%*c",&salar);
    printf("Informe o valor do cheque 1: ");
    scanf("%f%*c",&cheq1);
    printf("Informe o valor do cheque 2: ");
    scanf("%f%*c",&cheq2);
    cpmf1 = cheq1*0.38/100;
    cpmf2 = cheq2*0.38/100;
    saldo = salar-cheq1-cheq2-cpmf1-cpmf2;
    printf("O seu saldo atual e: %.2f\n",saldo);
    return 0;

}