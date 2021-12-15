#include <stdio.h>
#include <stdlib.h>

/*
*	Elabore um algoritmo que leia 
*	uma quantidade de segundos e 
*	transforme este tempo em dias, horas e minutos. 
*	Exemplo: 197820s. Resultado: 2 dias, 6 horas e 57 minutos.
*/

int main(void){
	
	int segundos, dias, minutos, horas, resto;
	
	printf("Entre com a quantidade de segundos: ");
	scanf("%i",&segundos);
	
	minutos = (segundos / 60) % 60;
	
	horas = (segundos / 3600) % 24;
	
	dias = (segundos / 3600) / 24;
    
	printf("%d dias, %d horas e %d minutos.\n",dias,horas,minutos);
	system("pause");
	return 0;
}


