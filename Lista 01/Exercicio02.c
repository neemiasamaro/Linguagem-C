#include <stdio.h>
#include <stdlib.h>

/*	
*	A Loja Mam�o com A��car est� vendendo seus produtos 
*	em 5 (cinco) presta��es sem juros. Fa�a um algoritmo que receba 
*	um valor de uma compra e mostre o valor das presta��es.
*/
 
int main(void){
	float total, valor;
	printf("Entre com o valor da compra: R$ ");
	scanf("%f",&total);
	
	valor = total / 5;
	
	printf("O valor de cada prestacao sera de: R$ %.2f\n",valor);
	system("pause");
	return 0;
}


