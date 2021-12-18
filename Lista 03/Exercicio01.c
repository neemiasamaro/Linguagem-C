#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que leia 5 valores e
*	conte quantos destes valores são negativos,
*	escrevendo esta informação.
*/

int main(void){
	int i,n;
	int j = 0;
	for(i = 1;i <= 5;i++){
		printf("Digite o %i valor: ",i);
		scanf("%i",&n);
		if(n < 0){
			j++;
		}
	}
	printf("%i valor(es)sao negativos\n",j);
	system("pause");
	return 0;
}


