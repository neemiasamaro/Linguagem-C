#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa em que leia a velocidade máxima permitida em uma avenida 
*	e a velocidade com que o motorista estava dirigindo nela 
*	e calcule a multa que uma pessoa vai receber, sabendo que são pagos:
*	a. 50 reais se o motorista estiver ultrapassar em até 10km/h a velocidade permitida;
*	b. 100 reais, se o motorista ultrapassar de 11 a 30 km/h a velocidade permitida;
*	c. 200 reais, se estiver acima de 31km/h da velocidade permitida.
*/

int main(void){
	int max, vel, dif;
	float mul;
	
	printf("Entre com a velocidade maxima permitida: ");
	scanf("%i",&max);
	printf("Entre com a velocidade do motorista: ");
	scanf("%i",&vel);
	
	dif = vel - max;
	
	if(dif <= 10){
		mul = 50.00;
		printf("Multa de R$ %.2f\n",mul);
	} else if(dif > 10 && dif <= 30){
		mul = 100.00;
		printf("Multa de R$ %.2f\n",mul);
	} else if(dif > 30){
		mul = 200.00;
		printf("Multa de R$ %.2f\n",mul);
	}
	system("pause");
	return 0;
}


