#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que receba o valor de um depósito e o valor da taxa de juros, calcule e
apresente o valor do rendimento e o valor total (valor do depósito + valor do rendimento).*/

int main(int argc, char *argv[]) {
	
float taxaJ, deposit, rend, valorTotal;
	
	printf("insira um valor:");
	scanf("%f", &deposit);
	printf("informe a taxa:");
	scanf("%f",&taxaJ);
	

	
	rend =taxaJ * (deposit / 100);
	valorTotal = deposit + taxaJ;
	
	printf("seu investimento rendeu:%.2f\n",rend);
	printf("valor acumulado:%.2f\n",valorTotal);
	
	return 0;
}

