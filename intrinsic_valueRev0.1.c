#include <stdio.h>
#include <math.h>
#define MARGEM 22.5

int main(void){
	
	float pl, pvp, lpa, vpa, vi;
	
	printf("_____CALCULO DE VALOR INTRINSECO_____\n\n");
	printf("Insira com o valor de P/L: ");
	scanf("%f", &pl);
	printf("Insira o valor de P/VP: ");
	scanf("%f", &pvp);
	
	if (pl <= 15 && pvp <= 1.5){
		printf("\nInsira o lucro por acao(LPA): ");
		scanf("%f", &lpa);
		printf("Insira o valor por acao(VPA): ");
		scanf("%f", &vpa);
		
		vi = sqrt((MARGEM * lpa * vpa));
		printf("\n\nO Valor intrinseco da acao eh: %.2f\n\n", vi);
	} else {
		printf("\nValores fora do recomendado para Valor Intrinseco (VI).\n\n");
	}
}
