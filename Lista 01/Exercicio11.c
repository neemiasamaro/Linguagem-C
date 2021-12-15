#include <stdio.h>
#include <stdlib.h>

/*
*	Faça um algoritmo que após a entrada de 
*	uma determinada distância entre dois pontos(Km), 
*	e uma determinada velocidade(Km/h), diga qual 
*	o tempo médio que levará para chegada à esse local.
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


