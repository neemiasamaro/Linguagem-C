#include <stdio.h>
#include <stdlib.h>

/*
*	Faça um programa que leia a nota 
*	e o número de faltas de um aluno 
*	e escreva seu conceito
*/

int main(void){
	float nota;
	int faltas;
	printf("Nota do aluno: ");
	scanf("%f",&nota);
	printf("Faltas do aluno: ");
	scanf("%i",&faltas);
	if(faltas <= 10){
		if(nota >= 0 && nota < 4){
			printf("Conceito: E");	
		} else if(nota >= 4 && nota < 5){
			printf("Conceito: D\n");	
		} else if(nota >= 5 && nota < 7.5){
			printf("Conceito: C\n");	
		} else if(nota >= 7.5 && nota < 9){
			printf("Conceito: B\n");	
		} else if(nota >= 9 && nota <= 10){
			printf("Conceito: A\n");	
		}
	} else if(faltas > 10){
		if(nota >= 0 && nota < 4){
			printf("Conceito: E\n");	
		} else if(nota >= 4 && nota < 5){
			printf("Conceito: E\n");	
		} else if(nota >= 5 && nota < 7.5){
			printf("Conceito: D\n");	
		} else if(nota >= 7.5 && nota < 9){
			printf("Conceito: C\n");	
		} else if(nota >= 9 && nota <= 10){
			printf("Conceito: B\n");	
		}
	}
	system("pause");
	return 0;
}


