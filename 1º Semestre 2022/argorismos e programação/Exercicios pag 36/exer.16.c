#include <stdio.h>
#include <math.h>
int main()
{
    float hor_trab, val_sal_min, val_hor_t, val_sal_bru, imp, val_sal_liq;
    
    printf("Informe o quantidade de horas trabalhadas: ");
    scanf("%f%*c",&hor_trab);
    printf("Informe o valor do salario minino: ");
    scanf("%f%*c",&val_sal_min);
    val_hor_t = val_sal_min/2;
    val_sal_bru = val_hor_t*hor_trab;
    imp = val_sal_bru*3/100;
    val_sal_liq = val_sal_bru-imp;
    printf("O salari liquido e: %.3f\n",val_sal_liq);
    return 0;
}