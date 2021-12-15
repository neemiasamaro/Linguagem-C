#include <stdio.h>
#include <stdlib.h>

/*	
*	Desenvolva um algoritmo que 
*	calcule a área de um triângulo. 
*	Area=(Base*Altura)/2.
*/
 
int main(void){
	float altura, base, area;
	
	printf("Entre com a base do triangulo: ");
	scanf("%f",&base);
	
	printf("Entre com a altura do triangulo: ");
	scanf("%f",&altura);
	
	area = (base * altura)/2;
	
	printf("O valor da area do triangulo eh de: %.2f\n", area);
	
	system("pause");
	return 0;	
}


