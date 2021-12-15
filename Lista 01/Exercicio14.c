#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um algoritmo que leia altura e comprimento 
*	de uma parede e calcule a quantidade de tijolos a ser 
*	utilizado na construção dessa parede. Sabe-se que 
*	o tijolo tem 30cm de comprimento e 20cm de altura 
*	e a argamassa ocupa 2,5 cm.
*/

int main(void){
	float altura, comprimento;
	int tijolos;
	printf("Entre com a altura da parede (em cm): ");
	scanf("%f",&altura);
	printf("Entrer com o comprimento da parede (em cm): ");
	scanf("%f",&comprimento);
	
	tijolos = (altura * comprimento) / 731.25;
	
	printf("A quantidade necessária de tijolos eh de: %i\n",tijolos);
	
	system("pause");
	return 0;
}


