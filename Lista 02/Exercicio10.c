#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que receba o peso de um produto de uma empresa de reciclagem, 
*	na qual a pe�a ao passar por um sensor � verificada 
*	o peso e analisada o quanto da pe�a ser� reaproveitada, sabendo que a pe�a � um metal: 
*	a. Se a pe�a pesar mais de 50 kg, aproveitar� 85% do peso da pe�a 
*	b. Se a pe�a pesar menos ou igual 50 kg e maior que 20 Kg, aproveitar� 60% do peso da pe�a
*	c. Se a pe�a pesar menos ou igual 20 kg e maior que 10 Kg, aproveitar� 30% do peso da pe�a.
*	d. Caso a pe�a pesar menos ou igual a 10 Kg, a pe�a n�o ser� aproveitada.
*	Ao final mostrar: Qual o peso ser� aproveitado da pe�a.
*/

int main(void){
	float peso,aproveitamento;
	
	printf("Peso do produto: ");
	scanf("%f",&peso);
	
	if(peso > 50){
		aproveitamento = (85 * peso)/100;
		printf("O peso aproveitado sera de %.2f Kg\n",aproveitamento);
	} else if(peso <= 50 && peso > 20){
		aproveitamento = (60 * peso)/100;
		printf("O peso aproveitado sera de %.2f Kg\n",aproveitamento);
	} else if(peso <= 20 && peso > 10){
		aproveitamento = (30 * peso)/100;
		printf("O peso aproveitado sera de %.2f Kg\n",aproveitamento);
	} else if(peso <= 10 && peso > 0){
		printf("A peca nao sera aproveitada\n");
	}
	
	system("pause");
	return 0;
}


