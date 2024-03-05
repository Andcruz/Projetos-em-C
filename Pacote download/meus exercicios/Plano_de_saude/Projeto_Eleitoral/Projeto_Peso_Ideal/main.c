#include <stdio.h>
#include <stdlib.h>

/* De acordo com uma tabela médica, o peso ideal está relacionado com a altura e
o sexo. Elabore um algoritmo que receba altura e sexo de uma pessoa e calcule e
imprima o seu peso ideal, sabendo que: */

int main(int argc, char *argv[]) {
	
	char  sexo;
	float alt, pesoIdeal;
	
	printf("digite seu sexo M/F:");
	scanf("%c",&sexo);
	printf("digite sua altura:");
	scanf("%f",&alt);
	
	if((sexo == 'm')||(sexo == 'm'))
	{
		pesoIdeal = (72.7 * alt)-58;
				
	}
	else
	{
		pesoIdeal = (62.1 * alt)- 44.7;
			
	}
		
		printf("seu sexo eh: %c\n",sexo);
		printf("seu peso ideal eh: %.2f\n", pesoIdeal);
		printf("sua altura eh: %.2f\n", alt);
	
		
		return 0;
}
