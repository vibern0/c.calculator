#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculoNaoSuportado()
{
	printf("Erro, calculo nao suportado!");
}

void interpretarCalculo(char entrada[], float saida[])
{
	char token[5];
	sscanf(entrada, "%f %s %f", &saida[0], token, &saida[2]);

	saida[1] = (!strcmp(token, "+") ? (1.f) : (
								(!strcmp(token, "-") ? (2.f) : (
									(!strcmp(token, "*") ? (3.f) : (
										(!strcmp(token, "/") ? (4.f) : (0.f))))))));
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

	printf("\nEscreva uma operação:");
	scanf("\n%[^\n]", entrada);
	while(strcmp(entrada, "sair"))
	{
		interpretarCalculo(entrada, saida);
		resultado = calcular(saida[0], saida[2], saida[1]);
		printf("Resultado : %.2f", resultado);
		printf("\nEscreva uma nova operação:");
		scanf("\n%[^\n]", entrada);
	}
	return 0;
}
