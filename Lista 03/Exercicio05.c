#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que apresente 
*	os resultados de uma tabuada de um 
*	número (N) qualquer que o usuário irá digitar
*/

int main(void){
	int i,n;
	printf("Insira um numero: ");
	scanf("%i",&n);
	for(i = 1;i <= 10;++i){
		printf("%i x %i = %i\n",n,i,n * i);
	}
	system("pause");
	return 0;
}


