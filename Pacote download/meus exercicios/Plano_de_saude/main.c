#include <stdio.h>
#include <stdlib.h>

/* Elabore um programa que receba o nome e a idade de uma pessoa e informe
o nome, a idade e o valor da mensalidade do plano de saúde. A tabela a seguir
apresenta os valores de mensalidade:*/

int main() {
	
	char nome;
	int idade;
	
	printf("digite seu nome:");
	scanf("%s", &nome);
	printf("digite sua idade:");
	scanf("%d", &idade);
	
	
	
	if (idade <=18)
	{
		printf("sua mensalidade eh = R$ 50,00");
    }
	else
		{
			if((idade>= 19) && (idade<=29))
			{
				printf("Sua mensalidade eh = R$ 70,00");
			}	
			else
				{
					if((idade>= 30)&&(idade <= 45))
					{					
					printf("Sua mensalidade eh = R$ 90,00");
					}
				else
					{
						if((idade>= 46)&&(idade<= 65))
						{
						printf("Sua mensalidade eh = R$ 130,00");
						}
					else
						{
					
							printf("Sua mensalidade eh = R$ 170,00");
					
						}
				}
			}
		}
	}



