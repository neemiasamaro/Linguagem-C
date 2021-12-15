#include <stdio.h>
#include <stdlib.h>

/*	
*	Em épocas de pouco dinheiro, os comerciantes estão 
*	procurando aumentar suas vendas oferecendo desconto. 
*	Faça um algoritmo que receba o valor de um produto e 
*	que escreva o novo valor tendo em vista que 
*	o desconto foi de 9%.
*/

int main(void){
	float valor, total;
	printf("Valor do produto: R$ ");
	scanf("%f",&valor);
	total = valor - (valor * 0.09);
	
	printf("O valor com desconto eh de: R$ %.2f\n", total);
	system("pause");
	return 0;
}


