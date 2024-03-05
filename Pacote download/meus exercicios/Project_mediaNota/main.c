#include <stdio.h>
#include <stdlib.h>

/*Elabore um programa que receba quatro notas e calcule a média aritmética entre elas.*/
int main(int argc, char *argv[]) {
	
	float n1, n2, n3, n4, soma, media;
	
	printf("digite a primeira nota:");
	scanf("%f",&n1);
	printf("digite a primeira nota:");
	scanf("%f",&n2);
	printf("digite a primeira nota:");
	scanf("%f",&n3);
	printf("digite a primeira nota:");
	scanf("%f",&n4);
	
	
	media = (n1+n2+n3+n4) /4;
	
	if (media > 6.0 )
	{
		printf("vc foi APROVADO! %.2f \n",media);
	}
	else
	
    if (media < 6.0)  
    {
    	printf("vc esta de EXAME %.2f \n", media);
	}
	else
	{
		printf("vc esta REPROVADO!");
		
	}
	
	printf("sua media eh: %.2f", media);
	
	return 0;
}
