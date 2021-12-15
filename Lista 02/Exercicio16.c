#include <stdio.h>
#include <stdlib.h>

/*
*	Fa�a um programa que leia dois valores, o primeiro servindo de indicador de opera��o e o segundo 
*	correspondendo ao raio de uma circunfer�ncia. Caso o primeiro valor lido seja igual a 1, calcular e 
*	escrever a �rea desta circunfer�ncia. Se o valor lido for 2, calcular e escrever o per�metro da 
*	circunfer�ncia. E se o valor lido for diferente destes dois valores, escreva uma mensagem dizendo que o 
*	indicador de opera��o foi mal fornecido.
*/

int main(void){
	float raio;
	int op;
	printf("1 - Calcular area da circunferencia\n2 - Perimetro da circunferencia\n\nOpcao:");
	scanf("%i",&op);
	printf("Raio: ");
	scanf("%f",&raio);
	
	switch (op){
		case 1:
			printf("Area da circunferencia: %.3f\n", raio * 3.14159);
			break;
		
		case 2:
			printf("Perimetro da circunferencia: %.3f\n", 2 * 3.14159 * raio);
			break;
		
		default: 
			printf("Esta operacao nao existe!");
			return 0;
	}
	
	system("pause");
	return 0;
}


