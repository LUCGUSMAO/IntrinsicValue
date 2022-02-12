#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   setlocale(LC_ALL,"");
   
    printf("__CALCULO DE VALOR INTRINSECO__\n\n");
    
    // Variaves gerais
    float valor, margem = 22.5,lpa, vpa;
        
        printf("Insira o lucro por acao (LPA): ");
        scanf("%f", &lpa);
        printf("\nInsira o valor pattrimonial da acao (VPA): ");
        scanf("%f", &vpa);
    
        //Calculo de valor intrinseco
        valor = sqrt((margem * lpa * vpa));
        printf("\nO valor intrinseco da acao é de R$ %.2f", valor);
         
}