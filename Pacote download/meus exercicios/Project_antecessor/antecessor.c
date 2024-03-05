#include <stdio.h>
#include <stdlib.h>

/* Escreva um programa que leia um número inteiro e apresente seu antecessor
e seu sucessor. */

int main(int argc, char *argv[]) {
	
	int numero;
	
	printf("digite um numero:");
	scanf("%d", &numero);
		
	printf("Antecessor eh =%d \n",numero - 1);
	printf("Sucessor eh =%d \n",numero + 1);	
	return 0;
}
