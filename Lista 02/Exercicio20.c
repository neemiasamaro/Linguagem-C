#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que leia os comprimentos 
*	dos três lados (A, B e C) de um triângulo, 
*	verifique se esses valores correspondem aos lados 
*	de um triângulo. Em caso afirmativo, 
*	informar ao usuário se o triângulo é equilátero, 
*	isóscele ou escaleno. Em caso negativo informar ao 
*	usuário que os valores não correspondem a um triângulo.
*/

int main(void){
	
	int a, b, c;
	printf("Entre com os lados de um triangulo:");
	scanf("%d%d%d",&a,&b,&c);
	
    if(a + b > c && a + c > b && b + c > a){
        printf("Os 3 lados formam um triangulo!\n");
        if(a == b && a == c)
            printf("Equilatero\n");
        else
            if(a == b || a == c || b == c)
                printf("Isosceles\n");
            else
                printf("Escaleno\n");
    }
    else{
        printf("Os 3 lados NAO formam um triangulo!\n");
	}
	system("pause");
	return 0;
}


