#include<stdio.h>
#include<math.h>
int main()
{
    float lado, area;
    printf("informe o lado do quadrado: ");
    scanf("%f%*c",&lado);
    area = lado*lado;
    printf("a area do quadrado e: %.2f\n",area);
    return 0;
}