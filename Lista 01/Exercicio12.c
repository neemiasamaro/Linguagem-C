#include <stdio.h>
#include <stdlib.h>

/*	
*	Construa um algoritmo para ler 
*	uma temperatura em graus Fahrenheit, 
*	calcular e escrever o valor correspondente 
*	em graus Celsius: 5 / 9 * (F – 32).
*/

int main(void){
	float fa, ce;
	printf("Entre com a temperatura em Fahrenheit: ");
	scanf("%f",&fa);
	
	ce = (fa - 32) / 1.8;
	
	printf("A temperatura correspondente em celsius eh de: %.2f graus celsius\n",ce);
	system("pause");
	return 0;
}


