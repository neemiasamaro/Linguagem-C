#include <stdio.h>
#include <stdlib.h>

/*
*	A prefeitura abriu uma linha de cr�dito para 
*	os funcion�rios estatut�rios. O valor m�ximo 
*	da presta��o n�o poder� ultrapassar 30% do sal�rio 
*	bruto. Fa�a um programa que leia o sal�rio bruto e 
*	o valor da presta��o e informar se o empr�stimo 
*	pode ou n�o ser concedido.
*/

int main(void){
	float salario, prest, cred;
	printf("Entre com o valor do salario: R$ ");
	scanf("%f",&salario);
	printf("Entre com o valor da prestacao: R$ ");
	scanf("%f",&prest);
	
	cred = 0.3 * salario;
	
	if(prest <= cred){
		printf("O emprestimo pode ser feito\n");
	} else{
		printf("O emprestimo nao pode ser realizado\n");
	}
	
	system("pause");
	return 0;
}


