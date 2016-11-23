#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculoNaoSuportado()
{
	printf("Erro, calculo nao suportado!");
}

void interpretarCalculo(char entrada[], float saida[])
{
	char *token;
	int ordem = 0;
	token = strtok(entrada, " ");
	while(token != NULL) 
	{
		if(ordem == 1)
			saida[ordem++] = (!strcmp(token, "+") ? (1.f) : (
								(!strcmp(token, "-") ? (2.f) : (
									(!strcmp(token, "*") ? (3.f) : (
										(!strcmp(token, "/") ? (4.f) : (0.f))))))));
		else
			saida[ordem++] = atof(token);

		token = strtok(NULL, " ");
	}
}

float calcular(float valor1, float valor2, float operacao)
{
	float resultado = 0.f;
	switch((int)(operacao))
	{
		case 1:
			resultado = valor1 + valor2;
			break;
		case 2:
			resultado = valor1 - valor2;
			break;
		case 3:
			resultado = valor1 * valor2;
			break;
		case 4:
			resultado = valor1 / valor2;
			break;
	}
	return resultado;
}

int main()
{
	char entrada[32];
	float saida[3];
	float resultado;

	printf("Escreva uma operação:");
	scanf(entrada, "%s");
	while(!strcmp(entrada, "sair"))
	{
		
		interpretarCalculo(entrada, saida);
		resultado = calcular(saida[0], saida[2], saida[1]);
		printf("Resultado : %.2f", resultado);
		printf("Escreva uma nova operação:");
		scanf(entrada, "%s");
	}
	return 0;
}
