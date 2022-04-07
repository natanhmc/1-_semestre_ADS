#include <stdio.h>
int main()
{
    float raio, area;
    printf("Insira o raio do circulo:");
    scanf("%f%*c",&raio);
    area = 3.1415*(raio*raio);
    printf("A area do circulo e:%.2f\n",area);
    return 0;
    }