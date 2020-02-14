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

  	printf("Sua idade é: %d\n", idade);

    return 0;
}
