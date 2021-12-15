#include <stdio.h>
#include <stdlib.h>

/*	
*	Escreva um programa para ler dois valores 
*	o primeiro indica o tipo de temperatura 
*	(C - Celsius ou F -Fahrenheit) 
*	e o segundo a temperatura.
*/

int main(void){
	char tipo;
	float temp;
	printf("C - Celsius ou F - Fahrenheit\nTipo temp.: ");
	scanf("%c",&tipo);
	printf("Temperatura: ");
	scanf("%f",&temp);
	switch (tipo){
		case 'C':
			printf("Temperatura: %.2f F\n",(temp * 1.8) + 32);
			break;
		
		case 'F':
			printf("Temperatura: %.2f C\n", (temp - 32) / 1.8);
			break;
		
		default:
			printf("Tipo não existente\n");
			return 0;
	}
	system("pause");
	return 0;
}


