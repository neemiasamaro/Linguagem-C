#include <stdio.h>
#include <stdlib.h>

/*
*	Faça um programa que escreva os 
*	números primos entre 92 e 1478
*/

int main(void){
	int i,j,n,r = 0;
	for(i = 92;i < 1478;i++){
		for(j = 1; j < i / 2; j++){
			if(i % j == 0 && i % 2 != 0){
				r++;
			}
		}
	}
	if(r == 2){
		printf("%i\n",i);	
	}
	system("pause");
	return 0;
}


