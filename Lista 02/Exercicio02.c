#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que entre com um número e 
*	informar se ele é divisível por 10, por 5, por 2 
*	ou se não é divisível por nenhum destes.
*/

int main(void){
	int n;
	printf("Entre com um numero: ");
	scanf("%i",&n);
	
	if(n % 10 == 0) {
		printf("Este numero eh divisivel por 10!");
	} else if(n % 5 == 0) {
		printf("Este numero eh divisivel por 5!");
	} else if(n % 2 == 0) {
		printf("Este numero eh divisivel por 2!");
	} else {
		printf("Este numero nao eh divisel por 10, 5 ou 2\n");
	}
	system("pause");
	return 0;
}


