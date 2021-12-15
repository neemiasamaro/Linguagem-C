#include <stdio.h>
#include <stdlib.h>

/*
*	A prefeitura abriu uma linha de crédito para 
*	os funcionários estatutários. O valor máximo 
*	da prestação não poderá ultrapassar 30% do salário 
*	bruto. Faça um programa que leia o salário bruto e 
*	o valor da prestação e informar se o empréstimo 
*	pode ou não ser concedido.
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


