#include <stdio.h>
int main(){
    float filhos, preco, div;
    printf("informe o valor do presente: ");
    scanf("%f%*c", &preco);
    printf("informe a quantidade de filhos: ");
    scanf("%f%*c", &filhos);
    div = preco/filhos;
    printf("o preco que cada filho deve pagar e %.2f\n",div);
    printf("Feliz dia das maes!!");
    return 0;
}