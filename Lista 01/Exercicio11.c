#include <stdio.h>
#include <stdlib.h>

/*
*	Fa�a um algoritmo que ap�s a entrada de 
*	uma determinada dist�ncia entre dois pontos(Km), 
*	e uma determinada velocidade(Km/h), diga qual 
*	o tempo m�dio que levar� para chegada � esse local.
*/

int main(void){
	float distancia, velocidade, tempo;
	printf("Entre com a distancia entre dois pontos (em Km): ");
	scanf("%f",&distancia);
	printf("Entre com a velocidade (em Km/h): ");
	scanf("%f",&velocidade);
	
	tempo = distancia/velocidade;
	
	printf("O tempo medio que levara para chegada sera de: %.2f hora\n", tempo);
	system("pause");
	return 0;
}


