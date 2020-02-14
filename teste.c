#include <stdlib.h>
#include <stdio.h>

int main()
{
	int idade, idadeNovo;
	
	printf("Insira sua idade:\n");
	scanf("%d", &idade);

	if(idade > 0)
	{	
		idade = idade-1;
	}
	else
	{
		printf("Idade inexistente\n");
	}

  	printf("Sua idade é modificada: %d\n", idade);
	
	idade = idade+1;
	
	printf("Sua idade original: %d\n", idade);

    return 0;
}
