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

int main()
{
	char entrada[32];

	printf("Escreva uma operação:");
	scanf(entrada, "%s");
	while(!strcmp(entrada, "sair"))
	{
		
		//funcao interpretar
		//funcao realizar calculo
		//imprimir resultado
		printf("Escreva uma nova operação:");
		scanf(entrada, "%s");
	}
	return 0;
}
