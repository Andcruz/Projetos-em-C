#include <stdio.h>
#include <stdlib.h>


/*Escreva um programa que receba dois números, calcule e apresente o resultado
do primeiro número elevado ao segundo.*/

int main(int argc, char *argv[]) {
	float n1, n2, resultado;
	printf("digite o primeiro numero:");
	scanf("%f",&n1);
	printf("digite o segundo numero:");
	scanf("%f",&n2);
	
	resultado= pow(n1,n2);
	
	printf("%.2f elevado a %.2f eh: %.2f", n1 , n2 , resultado);
	
	
	
	return 0;
}
