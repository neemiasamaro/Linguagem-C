#include <stdio.h>
#include <stdlib.h>

/*	
*	Fa�a um algoritmo que calcule o valor em reais, 
*	correspondente aos d�lares que um turista possui no cofre do hotel. 
*	O programa deve solicitar os seguintes dados: 
*	Quantidade de d�lares guardados no cofre e 
*	cota��o do d�lar naquele dia.
*/

int main(void){
	float cotacao, dolar, real;
	
	printf("Quantidade de dolares guardados no cofre: $ ");
	scanf("%f",&dolar);
	printf("Cotacao do dolar hoje: R$ ");
	scanf("%f",&cotacao);
	
	real = dolar * cotacao;
	
	printf("O valor em reais correspondente eh de: R$ %.2f\n",real);
	system("pause");
	return 0;
}


