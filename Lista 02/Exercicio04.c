#include <stdio.h>
#include <stdlib.h>

/*
*	O peso ideal para uma pessoa é calculado pelas seguintes fórmulas:
*	Sexo Masculino: (72.7*altura)-58
*	Sexo Feminino: (62.1*altura)-44.7
*	Escreva um programa que receba como entrada: sexo (f ou m), altura e peso; 
*	calcule o peso ideal usando a fórmula que for pertinente. Como resultado 
*	o programa deve exibir na tela: a diferença entre os pesos (peso e peso ideal) 
*	e um alerta: “*** Peso normal ou abaixo do ideal ***” 
*	ou “*** Peso acima do Ideal ***”
*/

int main(void){
	char sexo;
	float altura, peso, ideal, dif;
	
	printf("Entre com o seu sexo (f ou m): ");
	scanf("%c",&sexo);
	
	printf("Entre com a sua altura em metros: ");
	scanf("%f",&altura);
	
	printf("Entre com seu peso em Kg: ");
	scanf("%f",&peso);
	
	if(sexo == 'f'){
		ideal = (72.7 * altura) - 58;
		dif = peso - ideal;
		printf("A diferenca entre seu peso atual e ideal eh de: %.2f Kg\n", dif);
		if(dif <= 0){
			printf("*** Peso normal ou abaixo do ideal ***\n");
		} else {
			printf("*** Peso acima do Ideal ***\n");
		}
	} else if (sexo == 'm'){
		ideal = (62.1 * altura) - 44.7;
		dif = peso - ideal;
		printf("A diferenca entre seu peso atual e ideal eh de: %.2f Kg\n", dif);
		if(dif <= 0){
			printf("*** Peso normal ou abaixo do ideal ***\n");
		} else {
			printf("*** Peso acima do Ideal ***\n");
		}
	}
	system("pause");
	return 0;
}


