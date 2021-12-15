#include <stdio.h>
#include <stdlib.h>

/*
*	Uma revendedora de carros usados paga a seus funcionários vendedores, 
*	um salário fixo por mês e mais 5% do valor das vendas por ele efetuadas. 
*	Construa um algoritmo que leia o número do vendedor, 
*	o total de vendas no mês e o salário fixo. 
*	Calcule o salário a ser pago a este vendedor, 
*	escrevendo o número do vendedor e seu salário total.
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


