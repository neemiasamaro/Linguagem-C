#include <stdio.h>
#include <stdlib.h>
/*
*	Construa um programa que leia as informações de: 
*	horas trabalhadas (HT) e valor da hora trabalhada (VH). 
*	Calcule e escreva o salário líquido, 
*	o valor do INSS descontado e o valor do IRPF
*/
int main(void){
	float ht,vh,sb,inss,irpf,sl;
	printf("Horas trabalhadas: ");
	scanf("%f",&ht);
	printf("Valor da hora trabalhada: R$ ");
	scanf("%f",&vh);
	
	sb = ht * vh;
	if(sb > 0 && sb < 868.30){
		inss = sb * 0,0765;
		irpf = 0;
		sl = sb - inss;
		printf("Salario Liquido: R$ %.2f\n",sl);
		printf("Valor INSS descontado: R$ %.2f\n",inss);	
		printf("Valor IRPF: R$ %.2f\n",irpf);
	} else if(sb >= 868.30 && sb < 1447.15){
		inss = sb * 0.08;
		irpf = 0;
		sl = sb - inss;
		printf("Salario Liquido: R$ %.2f\n",sl);
		printf("Valor INSS descontado: R$ %.2f\n",inss);	
		printf("Valor IRPF: R$ %.2f\n",irpf);
	} else if(sb >= 1447.15 && sb < 2894.29){
		inss = sb * 0.09;
		if(sb > 1449.15 && sb < 3743.20){
			irpf = ((sb - inss) * 0.15) - 224.87;
			sl = sb - inss;
			printf("Salario Liquido: R$ %.2f\n",sl);
			printf("Valor INSS descontado: R$ %.2f\n",inss);	
			printf("Valor IRPF: R$ %.2f\n",irpf);
		} else{
			irpf = 0;
			sl = sb - inss;
			printf("Salario Liquido: R$ %.2f\n",sl);
			printf("Valor INSS descontado: R$ %.2f\n",inss);	
			printf("Valor IRPF: R$ %.2f\n",irpf);
		}
	} else {
		inss = sb * 0.11;
		if( sb > 3743.19){
			irpf = ((sb - inss) * 0.275) - 561.02;
			sl = sb - inss;
			printf("Salario Liquido: R$ %.2f\n",sl);
			printf("Valor INSS descontado: R$ %.2f\n",inss);	
			printf("Valor IRPF: R$ %.2f\n",irpf);
		}
	}
	system("pause");
	return 0;
}


