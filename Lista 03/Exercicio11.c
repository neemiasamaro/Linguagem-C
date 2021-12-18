#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que efetue o 
*	cálculo fatorial dos números ímpares 
*	situados na faixa de 1 a 10.
*/

int main(void){
	int j,i,n;
	for(j = 1;j < 10;j++){
		if(j % 2 != 0){
			n = j;
			for(i = 1;n > 1;n = n - 1){
				i = i * n;
			}
			printf("%i\n",i);
		}
	}
	system("pause");
	return 0;
}


