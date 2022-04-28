#include <stdio.h>
#include <math.h>
int main()
{
    float sal, aument;
    printf("Informe seu salario: ");
    scanf("%f%*c", &sal);
    if (sal <= 300){
        aument = (sal * 0.35) + sal;
        printf("Seu novo salario e de %.2f", aument);
    }else if (sal > 300){
        aument = (sal * 0.15) + sal;
        printf("Seu novo salario e de %.2f", aument);
    }
    return 0;
}