#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
*	Calcule a �rea de um c�rculo. 
*	A �rea de um c�rculo � calculada 
*	multiplicando o raio2 por PI (3.14159).
*/

int main(void){
	float area,raio;
	
	printf("Entre com o valor do raio: ");
	scanf("%f",&raio);
	
	area = pow(raio,2) * 3.14159;
	
	printf("A area do circulo mede: %.2f cm2\n",area);
	system("pause");
	return 0;
}


