#include <stdio.h>
#include <stdlib.h>

/*
*	Z� do Peixe, pescador e homem de bem, comprou um computador para controlar 
*	o rendimento di�rio de seu trabalho. Toda vez que ele traz um peso de peixes 
*	maior que o estabelecido pelo regulamento de pesca do estado de S�o Paulo (50 quilos) 
*	deve pagar uma multa de R$ 4,00 por quilo excedente. Z� precisa que voc� 
*	fa�a um programa que leia o peso de peixes e verifique se h� excesso. 
*	Se houver, calcular o excesso e o valor da multa que ele dever� pagar. 
*	Caso contr�rio escrever: �Peso dentro do regulamentado�.
*/

int main(void){
	int peso, ex;
	float mul;
	
	printf("Entre com o peso de peixes: ");
	scanf("%i",&peso);
	
	ex = peso - 50;
	
	mul = 4 * ex;
	
	if(peso > 0 && peso <= 50){
		printf("Peso dentro do regulamento\n");
	} else{
		printf("Excesso de %i Kg e multa de R$ %.2f\n",ex,mul);
	}
	system("pause");
	return 0;
}


