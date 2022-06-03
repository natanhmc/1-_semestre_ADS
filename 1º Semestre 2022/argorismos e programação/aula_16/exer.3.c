/*
Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das componentes deste vetor, 
armazenando o resultado em outro vetor. Os conjuntos têm 10 elementos cada. Imprimir todos os conjuntos. 
*/
#include<stdio.h>
int main(){
    float var[10],quad[10];
    int i=0,x=1;
    do{
        printf("informe o %d valor: ",x);
        scanf("%f%*c",&var[i]);
        i++;
        x++;
    } while (i<10);
    for ( i = 0; i < 10; i++){
        quad[i]=sqrt(var[i]);
        printf("o quadrado do vetor %d de valor %.2f e %.2f\n",i,var[i],quad[i]);

    }
}