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
	return 0;
}
