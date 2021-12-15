#include <stdio.h>
#include <stdlib.h>

/*
*	Construa um programa que leia os comprimentos 
*	dos tr�s lados (A, B e C) de um tri�ngulo, 
*	verifique se esses valores correspondem aos lados 
*	de um tri�ngulo. Em caso afirmativo, 
*	informar ao usu�rio se o tri�ngulo � equil�tero, 
*	is�scele ou escaleno. Em caso negativo informar ao 
*	usu�rio que os valores n�o correspondem a um tri�ngulo.
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


