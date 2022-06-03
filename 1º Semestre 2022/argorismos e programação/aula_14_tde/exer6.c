#include <stdio.h>
#include <string.h>

int main(void)
{
    char senha[50];
    int i;
    i=0;
    do{
        printf("informe a senha: ");
        scanf("%s%*c",&senha);
    
        if(strcmp(senha, "1234") == 1){
            printf("ACESSO Negado\n");
        }else if(strcmp(senha, "1234") == 0){
            printf("ACESSO PERMITIDO");
        }else{
            printf("Numero invalido");
        }
        i++;

    }while (strcmp(senha, "1234") == 1);
    
    printf("\nNumero de tentativas %d",i);
    return 0;
    
    
    
}