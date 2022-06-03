//programa com dois vetores de 10 elementos cada para uma loja
#include<stdio.h>
int main(){
    float prec[10],sal=400,comissao;
    float valor_geral,prec_total;
    int i=0,quant[10],x=1,mais_vend=0;

    do{
        printf("informe o preco do produto %d: ",i+1);
        scanf("%f%*c",&prec[i]);
        printf("informe a quantidade do produto vendida: ");
        scanf("%d%*c",&quant[i]);
        i++;

    } while (i<10);
    for ( i = 0; i < 10; i++){
        printf("a quantidade vendida e %d\n",quant[i]);
        if (mais_vend>quant[i]){
            mais_vend=quant[i];
            x++;
        }
        printf("o valor initario e %.2f\n",prec[i]);
        prec_total=(prec[i]*quant[i]);
        printf("o valor total de objetos vendidos foi de %.2f\n",prec_total);
        valor_geral+=prec_total;
    }
    printf("o valor geral foi de %.2f\n",valor_geral);
    comissao=(valor_geral*0.05);
    printf("a comissao do vendedor e %.2f\n",comissao);
    printf("e a quantia que vai receber sera de %.2f\n",comissao+sal);
    printf("o objeto que mais vendeu, vendeu %d com preco de %.2f",mais_vend,prec[x]);
}