#include <stdio.h>
#include <stdlib.h>

/*
*	Em uma eleição presidencial existem dois candidatos. 
*	Os votos são informados através de códigos. Os dados 
*	utilizados para a contagem dos votos têm-se 
*	a seguinte codificação: 1,2= voto para os
*	respectivos candidatos; 3= voto nulo; 4= voto em branco; 
*	Elabore um programa que leia o código do candidato em um voto.
*/

int main(void){
	int c = 0;
	int c1 = 0;
	int c2 = 0;
	int vn = 0;
	int vb = 0;
	int v = 0;
	
	do{
		printf("1 - Candidato 1\n2 - Candidato 2\n3 - Nulo\n4 - Branco\nDigite seu voto: ");
		scanf("%i",&v);
		if(v != 0 && v > 0){
			c++;
			if(v == 1) {
				c1++;
			} else if(v == 2){
				c2++;
			} else if(v == 3){
				vn++;
			} else if(v == 4){
				vb++;
			} else{
				v = 0;
			}
		}
		printf("Deseja votar novamente?\n0 - Nao ou 1 - Sim: ");
		scanf("%i",&v);
	}while(v != 0);
	
	printf("Votos Candidato 1: %.2f%%\n",(float)((c1 * 100)/c));
	printf("Votos Candidato 2: %.2f%%\n",(float)((c2 * 100)/c));
	printf("Votos Nulos: %.2f%%\n",(float)((vn * 100)/c));
	printf("Votos Branco: %.2f%%\n",(float)((vb * 100)/c));
	system("pause");
	return 0;
}


