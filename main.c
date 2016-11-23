#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void interpretarCalculo(char entrada[], float saida[])
{
	char *token;
	int ordem = 0;
	token = strtok(entrada, " ");
	while(token != NULL) 
	{
		saida[ordem++] = atof(token);
		token = strtok(NULL, " ");
	}
}

float calcular(float valor1, float valor2, float operacao)
{
	float resultado = 0.f;
	//
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
