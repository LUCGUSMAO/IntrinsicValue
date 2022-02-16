#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, ""); 
   int menu, num1, num2;
   float resultado1, resultado2;
  
  do{
  	  printf("__________________");	
      printf("\n|___CALCULADORA___|\n\n");          //Menu de opções
      printf("1 Adição (+)\n");
      printf("2 Subtração (-)\n");
      printf("3 Divisão (/)\n");
      printf("4 Multiplicação (*)\n");
      printf("5 Raiz Quadrada\n");
      printf("0 Sair\n\n");
      scanf("%d", &menu);
      
      switch(menu){
        case 0:                                 //Sair do programa
            printf("Finalizando...");
            return 0;
        case 1:                                 //operação de adição
            printf("primeiro digito: ");            
            scanf("%d", &num1);
            printf("segundo digito: ");
            scanf("%d", &num2);
            printf("\n*** Resultado: %d ***\n\n\n", num1 + num2);
            
            break;
        case 2:                                 // operação de subtração
            printf("Primeiro digito: ");
            scanf("%d", &num1);
            printf("Segundo digito: ");
            scanf("%d", &num2);
            printf("\n*** Resultado: %d ***\n\n\n", num1 - num2);
            
            break;
        case 3:                                 //Divisão
            printf("primeiro digito: ");
            scanf("%f", &resultado1);
            printf("Segundo digito: ");
            scanf("%f", &resultado2);
            printf("\n*** Resultado: %.2f ***\n\n\n", resultado1/resultado2);
            
            break;
        case 4:                                 //Multiplicação
            printf("primeiro digito: ");
            scanf("%d", &num1);
            printf("Segundo digito: ");
            scanf("%d", &num2);
            printf("\n*** Resultado: %d***\n\n\n", num1*num2);
            
            break;
        case 5:                                 //Raiz Quadrada
            printf("Raiz Quadrada do numero: ");
            scanf("%f", &resultado1);
            printf("\n***Resultado: %.1f ***\n\n\n", sqrt(resultado1));
            
            break;
        default:                                //digitação inválida
            printf("Opção inválida");
            break;
      }
    } while (menu);
    
    return 0;
}




