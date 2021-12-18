#include <stdio.h>
#include <stdlib.h>

/*
*	Escreva um programa que leia 500 valores inteiros 
*	e positivos e: a) encontre o maior valor; 
*	b) encontre o menor valor; 
*	c) calcule a média dos números lidos.
*/

int main(void){
	int n,i, j = 0;
	int maior,menor;
	for(i = 1;i <= 5;i++){
		printf("Digite um valor inteiro e positivo: ");
		scanf("%i",&n);
		j+=n;
		if(i == 1){
			maior = n;
			menor = n;
		}else{
			if(n > maior){
				maior = n;
			} else {
				if(n < menor){
					menor = n;
				}	
			}
		}
	}
	printf("Maior numero: %i\n",maior);
	printf("Menor numero: %i\n",menor);
	printf("Media dos numeros digitados: %.f\n",(float)(j / i));
	system("pause");
	return 0;
}


