#include <stdio.h>
#include <math.h>
int main()
{
    float num, quad, r2, r3, cubo;

    printf("Digite um numero maior ou igual a zero: ");
    scanf("%f%*c",&num);

    quad =pow(num,2);

    cubo =pow(num,3);

    r2 =sqrt(num);

    r3 =pow(num,1.0/3.0);

    printf("O quadrado do numero e: %.2f\n",quad);
    printf("O cubo do numero e: %.2f\n",cubo);
    printf("A raiz quadrada do numero e: %2.f\n",r2);
    printf("A raiz cubica e: %2.f\n",r3);
    
    return 0;
}