#include <stdio.h>
#include <stdlib.h>

/*
*	Um endocrinologista deseja controlar a saúde 
*	de seus pacientes e, para isso, ele utiliza o 
*	índice de massa corporal (IMC).Criar um programa
*	que apresente sua faixa de risco.
*/

int main(void){
	float peso, altura, imc;
	printf("Entre com seu peso (em kg): ");
	scanf("%f",&peso);
	printf("Entre com sua altura (em metros): ");
	scanf("%f",&altura);
	
	imc = peso/(altura * altura);
	
	if(imc < 20){
		printf("Abaixo do peso ideal\n");
	} else if(imc >= 20 && imc <= 25){
		printf("Peso normal\n");
	} else if(imc > 25 && imc <= 30){
		printf("Excesso de peso\n");
	} else if(imc > 30 && imc <= 35){
		printf("Obesidade\n");
	} else if(imc > 35){
		printf("Obesidade morbida\n");
	}
	system("pause");
	return 0;
}


