#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que receba o peso de um produto de uma empresa de reciclagem, 
*	na qual a peça ao passar por um sensor é verificada 
*	o peso e analisada o quanto da peça será reaproveitada, sabendo que a peça é um metal: 
*	a. Se a peça pesar mais de 50 kg, aproveitará 85% do peso da peça 
*	b. Se a peça pesar menos ou igual 50 kg e maior que 20 Kg, aproveitará 60% do peso da peça
*	c. Se a peça pesar menos ou igual 20 kg e maior que 10 Kg, aproveitará 30% do peso da peça.
*	d. Caso a peça pesar menos ou igual a 10 Kg, a peça não será aproveitada.
*	Ao final mostrar: Qual o peso será aproveitado da peça.
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


