#include <stdio.h>
#include <stdlib.h>

/*
*	Fa�a um programa que leia v�rios n�meros inteiros 
*	e calcule o somat�rio dos n�meros negativos. 
*	O fim da leitura ser� indicado pelo n�mero 0.
*/

int main(void){
	int i = 0;
	int j,n;
	do{
		i++;
		printf("Digite um valor: ");
		scanf("%i",&n);
		if(n < 0){
			j += n;
		}
		printf("Deseja digitar outro numero?\n 0 - Nao ou 1 - Sim: ");
		scanf("%i",&i);
	}while(i != 0);
	printf("A soma dos numeros negativos deu %i\n",j);
	system("pause");
	return 0;
}


