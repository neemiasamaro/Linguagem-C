#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que possibilite calcular
*	a área total de uma residência (sala, cozinha, 
*	banheiro, quartos, área de serviço, garagem, etc.).
*/

int main(void){
	
	float comprimento;
	float largura;
	float area = 0;
	int local;
	int i;
	
	do{
		printf("1 - Sala\n2 - Cozinha\n3 - Banheiro\n4 - Quartos\n5 - Area de Servico\n6 - Garagem\nDigite o comodo que deseja: ");
		scanf("%i",&local);
		printf("Digite a largura do comodo: ");
		scanf("%f",&largura);
		printf("Digite o comprimento do comodo: ");
		scanf("%f",&comprimento);
		area += (largura * comprimento);
		printf("Deseja escolher outro comodo? 0 - Nao ou 1 - Sim: ");
		scanf("%i",&i);	
	}while(i == 1);
	printf("Area total da casa: %.2f m2\n",area);
	system("pause");
	return 0;
}


