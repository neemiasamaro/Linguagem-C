#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que apresente a 
*	s�rie de Fibonacci at� o d�cimo quinto termo.
*/

int main(void){
	int c,n = 1,fib,aux;
	for(c = 1;c <= 15; c++){
		fib = fib + aux;
		aux = n;
		n = fib;
		printf("%i, ",fib);
	}
	system("pause");
	return 0;
}


