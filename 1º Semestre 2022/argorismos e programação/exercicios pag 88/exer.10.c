#include <stdio.h>
#include <math.h>
int main()
{
    float sal, aument;
    printf("Informe o preco de fabrica: ");
    scanf("%f%*c", &sal);
    if (sal <= 12000){
        aument = (sal * 0.05) + sal;
        printf("O preco total e de %.2f", aument);
    }else if ((sal>12000)&&(sal <= 25000)){
        aument = (((sal * 0.10)*0.15) + sal);
        printf("O preco total e de %.2f", aument);
    }else if(sal>=25000){
        aument = (((sal * 0.15)*0.20) + sal);
        printf("O preco total e de %.2f", aument);
    }
    return 0;
}