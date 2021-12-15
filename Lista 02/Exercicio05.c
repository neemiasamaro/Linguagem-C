#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa em que calcule e apresente quanto deve 
*	ser pago por um produto considerando a leitura do preço da 
*	etiqueta (PE) e o código de pagamento (CP).
*/

int main(void){
	float pe;
	int cp;
	
	printf("Preco: R$ ");
	scanf("%f",&pe);
	printf("Codigo de pagamento: ");
	scanf("%i",&cp);
	
	switch(cp){
		
		case 1: 
			printf("A vista em dinheiro ou cheque\n");
			printf("Valor: R$ %.2f\n", (pe - (pe * 0.10)));
			break;
			
		case 2: 
			printf("A vista com cartao de creditoo\n");
			printf("Valor: R$ %.2f\n", (pe - (pe * 0.05)));
			break;
			
		case 3: 
			printf("Valor: R$ %.2f\n", pe);
			printf("Em duas parcelas iguais de R$ %.2f sem juros\n", (pe / 2));
			break;
			
		case 4: 
			printf("Total: R$ %.2f\n",(pe + (pe * 0.010)));
			printf("Em tres parcelas iguais de R$ %.2f com acrescimo de 10%% de juros \n", (pe + (pe * 0.010)) / 3);
			break;
			
		default:
			printf("Erro!\n");
			return 0;
	}
	
	system("pause");
	return 0;
}


