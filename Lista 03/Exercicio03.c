#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que calcule 
*	a m�dia dos n�meros digitados pelo usu�rio, 
*	se eles forem pares. Termine a leitura 
*	se o usu�rio digitar zero (0).
*/

int main(void){
	int i = 0;
	int n;
	do{
		i++;
		printf("Digite um valor: ");
		scanf("%i",&n);
		if(n % 2 == 0){
			printf("A media desse numero eh: %i\n",(n/2));
		}
		printf("Deseja digitar outro numero?\n 0 - Nao ou 1 - Sim: ");
		scanf("%i",&i);
	}while(i != 0);
	system("pause");
	return 0;
}


