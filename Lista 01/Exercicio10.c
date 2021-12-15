#include <stdio.h>
#include <stdlib.h>

/*
*	Uma revendedora de carros usados paga a seus funcion�rios vendedores, 
*	um sal�rio fixo por m�s e mais 5% do valor das vendas por ele efetuadas. 
*	Construa um algoritmo que leia o n�mero do vendedor, 
*	o total de vendas no m�s e o sal�rio fixo. 
*	Calcule o sal�rio a ser pago a este vendedor, 
*	escrevendo o n�mero do vendedor e seu sal�rio total.
*/

int main(void){
	int vendas, vendedor;
	float salario, salario_final;
	
	printf("Numero do vendedor: ");
	scanf("%i",&vendedor);
	
	printf("Total de vendas: ");
	scanf("%i",&vendas);
	
	printf("Salario fixo: R$ ");
	scanf("%f",&salario);
	
	salario_final = salario + (salario * 0.05);
	
	printf("\n***** Vendedor %i *****\n",vendedor);
	printf("Salario atual: R$ %.2f\n", salario);
	printf("Salario ajustado: R$ %.2f\n", salario_final);
	
	system("pause");
	return 0;
}


