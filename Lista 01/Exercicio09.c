#include <stdio.h>
#include <stdlib.h>

/*
*	Calcule o �ndice de massa corp�rea (IMC) de uma pessoa. 
*	O IMC � calculado dividindo-se o peso da pessoa, em kg, 
*	pelo quadrado da sua altura, em metros
*/

int main(void){
	
	float peso, altura, imc;
	printf("Entre com seu peso (em kg): ");
	scanf("%f",&peso);
	printf("Entre com sua altura (em metros): ");
	scanf("%f",&altura);
	
	imc = peso/(altura * altura);
	
	printf("Seu IMC vale: %.2f\n",imc);
	system("pause");
	return 0;
}


