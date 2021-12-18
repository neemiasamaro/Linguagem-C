#include <stdio.h>
#include <stdlib.h>

/*
*	Escreva um programa que leia um número n, 
*	que indica quantos valores devem ser lidos a seguir. 
*	Para cada número lido, mostre o fatorial deste valor.
*/

int main(void){
	int j,i,n,c;
	printf("Quantos numeros serao lidos? ");
	scanf("%i",&c);
	for(j = 1;j <= c;j++){
		printf("Digite o %i numero: ",j);
		scanf("%i",&n);
			for(i = 1;n > 1;n = n - 1){
				i = i * n;
			}
		printf("%i\n",i);
	}
	system("pause");
	return 0;
}


