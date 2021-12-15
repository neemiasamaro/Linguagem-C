#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
*	Construa um algoritmo que o usuário entre com um lado de um quadrado e informe:
*	a. Perímetro: lado * 4
*	b. Área: lado2
*	c. Diagonal: lado * (2^*1/2)
*/

int main(void){
	float area, diagonal, lado, perimetro;
	printf("Entre com o lado do quadrado: ");
	scanf("%f",&lado);
	
	area = pow(lado, 2);
	diagonal = lado * (sqrt(2));
	perimetro = lado * 4;
	
	printf("O perimetro do quadrado eh de: %.2f\n",perimetro);
	printf("A area do quadrado eh de: %.2f\n",area);
	printf("A diagonal do quadrado mede: %.2f\n", diagonal);
	
	system("pause");
	return 0;
}


