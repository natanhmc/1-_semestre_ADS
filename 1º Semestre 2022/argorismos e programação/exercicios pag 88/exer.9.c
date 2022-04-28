#include <stdio.h>
#include <math.h>
int main()
{
    float sal, aument;
    printf("Informe seu saldo medio: ");
    scanf("%f%*c", &sal);
    if (sal > 400){
        aument = (sal * 0.30) + sal;
        printf("Seu valor de credito e de %.2f", aument);
    }else if ((sal<=400)&&(sal > 300)){
        aument = (sal * 0.25) + sal;
        printf("Seu valor de credito e de %.2f", aument);
    }else if((sal<=300)&& (sal > 200)){
        aument = (sal * 0.20) + sal;
        printf("Seu valor de credito e de %.2f", aument);
    }else if (sal<=200){
        aument = (sal * 0.10) + sal;
        printf("Seu valor de credito e de %.2f", aument);
    }

    return 0;
}