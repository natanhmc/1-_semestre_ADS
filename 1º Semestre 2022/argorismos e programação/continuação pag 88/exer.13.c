#include<stdio.h>
int main(){
    float preco, novo_preco;
    printf("Informe o valor do produto: ");
    scanf("%f%*c",&preco);
    if(preco<=50){
        novo_preco=(preco+(preco*0.05));
        printf("O novo preco e %.2f \n ",novo_preco);
    }else if((preco>50)&&(preco<=100)){
        novo_preco=(preco+(preco*0.10));
        printf("O novo preco e %.2f \n",novo_preco);    
    }else if(preco>100){
        novo_preco=(preco+(preco*0.15));
        printf("O novo preco e %.2f \n",novo_preco);    
    }
    if(novo_preco<=80){
        printf("O novo preco esta barato ");
    }else if((preco>80)&&(preco<=120)){
        printf("O novo preco esta normal "); 
    }else if((preco>120)&&(preco<=200)){
        printf("O novo preco esta caro "); 
    }else if(preco>200){
        printf("O novo preco esta muito caro "); 
    }
  
  
    
}