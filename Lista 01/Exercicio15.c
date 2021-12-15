#include <stdio.h>
#include <stdlib.h>

/*	
*	Calcular a quantidade total gasta por um fumante.
*	Leia o número de anos que ele fuma, o nº de cigarros 
*	fumados por dia e o preço de uma carteira. Considere 
*	que cada carteira possua 20 cigarros 
*	e um total de 365 dias no ano.
*/

int main(void){
	float total, carteira, valor_cigarro;
	int anos, cigarros, cig_ano;
	
	printf("Anos que fuma: ");
	scanf("%i",&anos);
	
	printf("Numero de cigarros por dia: ");
	scanf("%i",&cigarros);
	
	printf("Preco de uma carteira: ");
	scanf("%f",&carteira);
	
	total = (carteira / 20) * (cigarros * (anos * 365));
	
	printf("O valor total gasto foi de: R$ %.2f\n",total);
	system("pause");
	return 0;
}


