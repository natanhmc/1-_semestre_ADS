#include <stdio.h>

int main()
{
    int nota1, nota2, nota3, nota4, soma;
    printf ("Digite a nota 1: ");
    scanf ("%d%*c",&nota1);
    printf ("Digite a nota 2: ");
    scanf ("%D%*c",&nota2);
    printf ("Digite a nota 3: ");
    scanf ("%d%*c",&nota3);
    printf("Digite a nota 4: ");
    scanf("%d%*c",&nota4);
    soma = (nota1+nota2+nota3+nota4);
    printf("A soma e : %d" ,soma);
    return 0;
}
