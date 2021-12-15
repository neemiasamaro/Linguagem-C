#include <stdio.h>
#include <stdlib.h>

/*
*	Uma fruteira está vendendo frutas com a seguinte tabela de preços apresentada 
*	abaixo. Escreva um programa para ler a fruta (Abacaxi - A ou Goiaba - G) e a
*	quantidade (em Kg) adquirida. Escreva o valor a ser pago pelo cliente. Admitindo que o 
*	cliente possa comprar apenas uma fruta. Se o cliente comprar mais de 8 Kg em frutas, 
*	receberá ainda um desconto de 10% sobre este total.
*/

int main(void){
	char fruta;
	float qtd;
	printf("A - Abacaxi ou G - Goiaba\nTipo de Fruta: ");
	scanf("%c",&fruta);
	printf("Quantidade comprada: ");
	scanf("%f",&qtd);
	
	if(fruta == 'A'){
		if(qtd <= 2){
			printf("Valor a ser pago: R$ %.2f\n", qtd * 1.90);
		} else if(qtd > 2 && qtd <= 5){
			printf("Valor a ser pago: R$ %.2f\n", qtd * 1.80);
		} else if(qtd > 5){
			if(qtd > 8){
				printf("Valor a ser pago: R$ %.2f\n", (qtd * 1.80) - ((qtd * 1.80) * 0.10));	
			} else{				
				printf("Valor a ser pago: R$ %.2f\n", qtd * 1.80);
			}
		}
	} else if(fruta == 'G'){
		if(qtd <= 2){
			printf("Valor a ser pago: R$ %.2f\n", qtd * 2.50);
		} else if(qtd > 2 && qtd <= 5){
			printf("Valor a ser pago: R$ %.2f\n", qtd * 2.40);
		} else if(qtd > 5){
			if(qtd > 8){
				printf("Valor a ser pago: R$ %.2f\n", (qtd * 2.20) - ((qtd * 2.20) * 0.10));	
			} else{
				printf("Valor a ser pago: R$ %.2f\n", qtd * 2.20);
			}
		}
	} else {
		printf("Tipo incorreto!");
		return 0;
	}
	
	system("pause");
	return 0;
}


