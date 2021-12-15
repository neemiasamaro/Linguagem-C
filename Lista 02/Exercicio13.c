#include <stdio.h>
#include <stdlib.h>

/*
*	Desenvolva um programa que leia o número de litros 
*	vendidos e o tipo de combustível (codificado da seguinte forma: A - álcool, G -
*	gasolina). Calcule e escreva o valor a ser pago pelo cliente.
*/

int main(void){
	char tipo;
	float litros;
	printf("A - Alcool ou G - Gasolina\nTipo de combustivel: ");
	scanf("%c",&tipo);
	printf("Litros vendidos: ");
	scanf("%f",&litros);
	
	if(tipo == 'A'){
		if(litros <= 15){
			printf("Valor a ser pago: R$ %.2f\n", litros * 2.00);
		} else if(litros > 15 && litros <= 30){
			printf("Valor a ser pago: R$ %.2f\n", litros * 1.95);
		} else if(litros > 30){
			printf("Valor a ser pago: R$ %.2f\n", litros * 1.80);
		}
	} else if(tipo == 'G'){
		if(litros <= 15){
			printf("Valor a ser pago: R$ %.2f\n", litros * 2.90);
		} else if(litros > 15 && litros <= 30){
			printf("Valor a ser pago: R$ %.2f\n", litros * 2.85);
		} else if(litros > 30){
			printf("Valor a ser pago: R$ %.2f\n", litros * 2.75);
		}
	} else {
		printf("Tipo incorreto!");
		return 0;
	}
	system("pause");
	return 0;
}


