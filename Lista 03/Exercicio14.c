#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que gere a sequencia 
*	de números perfeitos entre 1 e 800.
*/

int main(void){
	int num,soma,contador;
	for(contador = 1;contador < 800;contador++){
		soma = 0;
		for(num = 1;num < 800;num++){
			if(contador % num == 0){
				soma = soma + num;
				if(soma == contador){
					
					printf("%i\n",contador);
				}
			}
		}
	}
	system("pause");
	return 0;
}


