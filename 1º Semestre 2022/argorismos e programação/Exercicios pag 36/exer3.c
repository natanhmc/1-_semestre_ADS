#include <stdio.h>

int main()
{
    int nota1, peso1, nota2, peso2, nota3, peso3, media;
    printf("Digite a nota 1:");
    scanf("%d%*c",&nota1);
    printf("Digite o peso 1:");
    scanf("%d%*c",&peso1);
    printf("Digite a nota 2:");
    scanf("%d%*c",&nota2);
    printf("Digite a peso 2:");
    scanf("%d%*c",&peso2);
    printf("Digite a nota 3:");
    scanf("%d%*c",&nota3);
    printf("Digite a peso 3:");
    scanf("%d%*c",&peso3);
    media = (nota1*peso1+nota2*peso2+nota3*peso3)/(peso1+peso2+peso3);
    printf("A media e:%d", media);
    return 0;
}