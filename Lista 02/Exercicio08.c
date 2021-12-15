#include <stdio.h>
#include <stdlib.h>

/*
*	Escreva um algoritmo que leia um peso na terra 
*	e o número de um planeta e exiba o valor do seu 
*	peso neste planeta.
*/

int main(void){
	float peso;
	int esc;
	
	printf("Entre com seu peso: ");
	scanf("%f",&peso);
	printf("1 - Mercurio\n2 - Venus\n3 - Marte\n4 - Jupiter\n5 - Saturno\nEntre com o numero de um planeta: ");
	scanf("%i",&esc);
	
	switch (esc){
		case 1:
			printf("Seu peso em Mercurio seria de %.2f\n", peso * 0.37);
			break;
		
		case 2:
			printf("Seu peso em Venus seria de %.2f\n", peso * 0.88);
			break;
		
		case 3:
			printf("Seu peso em Marte seria de %.2f\n", peso * 0.38);
			break;
			
		case 4:
			printf("Seu peso em Jupiter seria de %.2f\n", peso * 2.64);
			break;
			
		case 5:
			printf("Seu peso em Saturno seria de %.2f\n", peso * 1.15);
			break;
		
		default:
			printf("Valor invalido!\n");
			return 0;
	}
	system("pause");
	return 0;
}


