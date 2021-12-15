#include <stdio.h>
#include <stdlib.h>

/*
*	Escreva um programa que, dada a idade de um 
*	nadador, classifique-o em uma das categorias 
*	especificadas na tabela.
*/

int main(void){
	int idade;
	printf("Idade: ");
	scanf("%i",&idade);
	
	if(idade >= 5 && idade <= 7){
		printf("Categoria: Infantil A\n");
	} else if(idade >= 8 && idade <= 10){
		printf("Categoria: Infantil B\n");
	} else if(idade >= 11 && idade <= 13){
		printf("Categoria: Infanto Juvenil\n");
	} else if(idade >= 14 && idade <= 17){
		printf("Categoria: Juvenil\n");
	} else if(idade >= 18){
		printf("Categoria: Senior\n");
	}
	
	system("pause");
	return 0;
}


