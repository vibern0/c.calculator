#include <stdio.h>
#include <string.h>

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
