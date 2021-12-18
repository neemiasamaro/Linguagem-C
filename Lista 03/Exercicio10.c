#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que efetue o cálculo fatorial 
*	de um número (N) que o usuário irá digitar.
*/

int main(void){
	int n,i;
	printf("Digite um numero: ");
	scanf("%i",&n);
	for(i = 1;n > 1;n = n - 1){
		i = i * n;
	}
	printf("Fatorial deste numero: %i\n",i);
	system("pause");
	return 0;
}


