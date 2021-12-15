#include <stdio.h>
#include <stdlib.h>

/*
*	Um hotel deseja fazer uma promoção especial de final de semana, 
*	concedendo um desconto de 25% na diária. Sendo informados, o número 
*	de apartamentos do hotel e o valor da diária por apartamento para o 
*	final de semana completo (sem desconto), elabore um algoritmo para 
*	calcular: 
*	a. Valor promocional da diária; 
*	b. Valor total a ser arrecadado caso a ocupação neste final de semana atinja 100%; 
*	c. Valor total a ser arrecadado caso a ocupação neste final de semana atinja 70%; 
*	d. Valor que o hotel deixará de arrecadar em virtude da promoção, caso a ocupação atinja 100%
*/

int main(void){
	int ap;
	float diaria;
	float total, total_cem, total_set, resto;
	printf("Quantidade de apartamentos do hotel: ");
	scanf("%i",&ap);
	printf("Valor da diaria: R$ ");
	scanf("%f",&diaria);
	
	total = diaria - (diaria * 0.25);
	total_cem = total * ap;
	total_set = total * (ap - (ap * 0.70));
	resto = total_cem - (diaria * ap);
	
	printf("Valor com desconto: R$ %.2f\n",total);
	printf("Valor total com 100%% de ocupacao: R$ %.2f\n",total_cem);
	printf("Valor total com 70%% de ocupacao: R$ %.2f\n",total_set);
	printf("Valor deixado de arrecadar: R$ %.2f\n",resto);
	
	system("pause");
	return 0;
}


