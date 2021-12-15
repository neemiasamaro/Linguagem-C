#include <stdio.h>
#include <stdlib.h>

/*
*	A empresa XYZ decidiu conceder um aumento de salários a seus funcionários de 
*	acordo com a tabela abaixo. Escrever um algoritmo em pseudocódigo que lê a 
*	área de um funcionário (Produção ou Administrativa) e o seu salário atual. 
*	Escreva o percentual de seu aumento, o valor do aumento e o valor do salário 
*	corrigido.
*/

int main(void){
	char area;
	float salario, final;
	printf("P - Producao ou A - Administrativa\nEntre com a sua area de trabalho: ");
	scanf("%c",&area);
	printf("Entre com seu salario atual: ");
	scanf("%f",&salario);
	if(area == 'P' || area == 'p'){
		if(salario >= 0 && salario <= 700){
			printf("Aumento de 15%%\n");
			printf("Valor do aumento R$ %.2f\n", salario * 0.15);
			printf("Salario corrigido R$ %.2f\n", salario + (salario * 0.15));
		} else if(salario > 700 && salario <= 1800){
			printf("Aumento de 10%%\n");
			printf("Valor do aumento R$ %.2f\n", salario * 0.10);
			printf("Salario corrigido R$ %.2f\n", salario + (salario * 0.10));
		} else if(salario > 1800 && salario <= 2500){
			printf("Aumento de 7%%\n");
			printf("Valor do aumento R$ %.2f\n", salario * 0.07);
			printf("Salario corrigido R$ %.2f\n", salario + (salario * 0.07));
		} else if(salario > 2500){
			printf("Sem aumento\n");
			printf("Valor do aumento R$ %.2f\n", salario * 0);
			printf("Salario corrigido R$ %.2f\n", salario);
		}
	} else if(area == 'A' || area == 'a'){
		if(salario >= 0 && salario <= 700){
			printf("Aumento de 18%%\n");
			printf("Valor do aumento R$ %.2f\n", salario * 0.18);
			printf("Salario corrigido R$ %.2f\n", salario + (salario * 0.18));
		} else if(salario > 700 && salario <= 1800){
			printf("Aumento de 12%%\n");
			printf("Valor do aumento R$ %.2f\n", salario * 0.12);
			printf("Salario corrigido R$ %.2f\n", salario + (salario * 0.12));
		} else if(salario > 1800 && salario <= 2500){
			printf("Aumento de 8%%\n");
			printf("Valor do aumento R$ %.2f\n", salario * 0.08);
			printf("Salario corrigido R$ %.2f\n", salario + (salario * 0.08));
		} else if(salario > 2500){
			printf("Aumento de 5%%\n");
			printf("Valor do aumento R$ %.2f\n", salario * 0.05);
			printf("Salario corrigido R$ %.2f\n", salario + (salario * 0.05));
		}
	} else {
		printf("Esta area nao existe!");
		return 0;
	}
	system("pause");
	return 0;
}


