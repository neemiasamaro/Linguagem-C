#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um algoritmo que leia o valor e o tipo de um 
*	produto. Calcule o imposto de um produto de acordo com o 
*	valor e o tipo de produto, conforme tabela abaixo.
*/

int main(void){
	char tipo;
	float valor;
	printf("A - Alimentacao, L - Limpeza ou V - Vestuario\nTipo de produto: ");
	scanf("%c",&tipo);
	printf("Valor do produto: R$ ");
	scanf("%f",&valor);
	
	if(tipo == 'A'){
		if(valor <= 100){
			printf("Valor a ser pago: R$ %.2f\n", valor + (valor * 0.03));
		} else if(valor > 100 && valor <= 500){
			printf("Valor a ser pago: R$ %.2f\n", valor + (valor * 0.02));
		} else if(valor > 500){
			printf("Valor a ser pago: R$ %.2f\n", valor + (valor * 0.01));
		}
	} else if(tipo == 'L'){
		if(valor <= 100){
			printf("Valor a ser pago: R$ %.2f\n", valor + (valor * 0.05));
		} else if(valor > 100 && valor <= 500){
			printf("Valor a ser pago: R$ %.2f\n", valor + (valor * 0.04));
		} else if(valor > 500){
			printf("Valor a ser pago: R$ %.2f\n", valor + (valor * 0.02));
		}
	} else if(tipo == 'V'){
		if(valor <= 100){
			printf("Valor a ser pago: R$ %.2f\n", valor + (valor * 0.07));
		} else if(valor > 100 && valor <= 500){
			printf("Valor a ser pago: R$ %.2f\n", valor + (valor * 0.06));
		} else if(valor > 500){
			printf("Valor a ser pago: R$ %.2f\n", valor + (valor * 0.04));
		}
	}else {
		printf("Tipo incorreto!");
		return 0;
	}
	system("pause");
	return 0;
}


