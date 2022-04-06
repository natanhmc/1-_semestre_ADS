#include<stdio.h>
#include<math.h>
int main()
{
    float basemaior, basemenor, alt, area;
    printf("informe a base maior: ");
    scanf("%f%*c",&basemaior);
    printf("informe a base menor: ");
    scanf("%f%*c",&basemenor);
    printf("informe a altura: ");
    scanf("%f%*c",&alt);
    area = ((basemaior+basemenor)*alt)/2;
    printf("a area do trapezio e: %.2f\n",area);
    return 0;
}