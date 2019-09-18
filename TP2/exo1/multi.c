#include <stdio.h>

void jeuMulti(unsigned char table)
{
	unsigned char result;
	for(unsigned char i = 1; i < 10; i++)
	{
		printf("%hhu x %hhu = ", i, table);
		scanf("%hhu", &result);
		if(i * table != result)
		{
			printf("Erreur ! %hhu x %hhu = %hhu et non %hhu\n", i, table, i*table, result);
			return;
		}
	}
}

unsigned char jeuMultiPoints(unsigned char table)
{
	unsigned char result, erreur = 0;
	for(unsigned char i = 1; i < 10; i++)
	{
		printf("%hhu x %hhu = ", i, table);
		scanf("%hhu", &result);
		if(i * table != result)
		{
			printf("Erreur ! %hhu x %hhu = %hhu et non %hhu\n", i, table, i*table, result);
			erreur++;
		}
	}

	return erreur;
}

unsigned char ask()
{
	unsigned char n = 0;
	while(n > 9 || n < 2)
	{
		printf("Valeur de n : ");
		scanf("%hhu", &n);
		if(n > 9 || n < 2)
			puts("Réessayez : la valeur doit être comprise entre 2 et 9");
	}

	return n;
}

int main(int argc, char** argv)
{
	jeuMulti(ask());

	unsigned char erreur = jeuMultiPoints(ask());
	if(erreur == 0)
		puts("Felicitation");

	return 0;
}