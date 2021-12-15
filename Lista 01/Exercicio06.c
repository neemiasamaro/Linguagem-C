#include <stdio.h>
#include <stdlib.h>

/*
*	Faça um algoritmo que receba o ano de nascimento 
*	de uma pessoa e o ano atual, 
*	calcule e mostre: A idade dessa pessoa;
*	E quantos anos ela terá em 2028.
*/

int main(void){
	int ano_nasc, ano_atual, idade, idade_em;
	
	printf("Seu ano de nascimento: ");
	scanf("%i", &ano_nasc);
	
	printf("Ano atual: ");
	scanf("%i", &ano_atual);
	
	idade = ano_atual - ano_nasc;
	idade_em = 2028 - ano_nasc;
	
	printf("Sua idade eh: %i\n",idade);
	printf("Sua idade em 2028 sera de: %i\n", idade_em);
	system("pause");
	return 0;
}


