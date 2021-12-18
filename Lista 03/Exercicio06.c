#include <stdio.h>
#include <stdlib.h>

/*
*	Escreva um programa que passe 
*	pela sequencia de 1000 a 1999. 
*	Escreva os valores que 
*	dividido por 11 dão resto igual a 5.
*/

int main(void){
	int i;
	for(i = 1000; i < 2000;i++){
		if(i % 11 == 5){
			printf("%i\n",i);
		}
	}
	system("pause");
	return 0;
}


