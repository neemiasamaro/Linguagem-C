#include <stdio.h>
#include <stdlib.h>

/*	
*	Construa um algoritmo que solicite 
*	o saldo de uma aplica��o 
*	e mostre o saldo reajustado, 
*	com acr�scimo de 7,5%.
*/

int main(void){
	
	float saldo, reajuste;
	
	printf("Entre com o saldo total: R$ ");
	scanf("%f",&saldo);
	
	reajuste = saldo + (saldo * 0.075);
	
	printf("O saldo reajustado eh de: R$ %.2f\n", reajuste);
	system("pause");
	return 0;
}


