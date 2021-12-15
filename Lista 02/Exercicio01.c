#include <stdio.h>
#include <stdlib.h>

/*	
*	Faça um programa que leia dois valores inteiros A e B, 
*	se os valores forem iguais deverá se somar os dois, 
*	caso contrário multiplique A por B ao 
*	final do calculo escrever o resultado.
*/

int main(void){
	int n1, n2;
	printf("Entre com o valor de A: ");
	scanf("%i",&n1);
	printf("Entre com o valor de B: ");
	scanf("%i",&n2);
	
	if(n1 == n2){
		printf("%i\n",(n1 + n2));
	} else{
		printf("%i\n",(n1 * n2));
	}
	
	system("pause");
	return 0;
}


