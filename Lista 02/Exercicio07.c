#include <stdio.h>
#include <stdlib.h>

/*
*	Faça um Programa que pergunte em que turno você estuda. 
*	Peça para digitar M - Matutino ou V - Vespertino ou N - Noturno. 
*	Escreva a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" 
*	ou "Valor Inválido!", conforme o caso.
*/

int main(void){
	char turno;
	printf("Qual turno voce estuda?\nM - Matutino, V - Vespertino ou N - Noturno: ");
	scanf("%c",&turno);
	
	if(turno == 'M' || turno == 'm') {
		printf("Bom Dia!\n");
	} else if(turno == 'V' || turno == 'v') {
		printf("Boa Tarde!\n");
	} else if(turno == 'N' || turno == 'n') {
		printf("Boa Noite!\n");
	} else {
		printf("Valor invalido!\n");
	}
	
	system("pause");
	return 0;
}


