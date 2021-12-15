#include <stdio.h>
#include <stdlib.h>

/*
*	Sabe-se que o quilowatt de energia custa 0,5% do sal�rio m�nimo. 
*	Fa�a um algoritmo que receba o valor do sal�rio m�nimo 
*	e a quantidade de quilowatts consumida por uma resid�ncia. Calcule e mostre: 
*	a. O valor, em Reais, de cada quilowatt.
*	b. O valor, em Reais, a ser pago por essa resid�ncia. 
*	c. O valor, em Reais, a ser pago com desconto de 15%.
*/

int main(void){
	float salario, qw, valor_qw, valor_res, valor_des;
	printf("Valor do salario minimo: R$ ");
	scanf("%f",&salario);
	printf("Quantidade de quilowatts: ");
	scanf("%f",&qw);
	
	valor_qw = 0.0005 * salario;
	
	valor_res = valor_qw * qw;
	
	valor_des = valor_res - (valor_res * 0.15);
	
	printf("Valor em reais: R$ %.2f\n",valor_qw);
	printf("Valor residencia: R$ %.2f\n",valor_res);
	printf("Valor com desconto: R$ %.2f\n",valor_des);
	
	system("pause");
	return 0;
}


