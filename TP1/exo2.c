#include <stdio.h>

int main(int argc, char** argv)
{
	printf("Entrez l'année : ");
	unsigned short annee;
	scanf("%hu", &annee);
	if(annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0))
		printf("L'année %hu est bissextile !\n", annee);
	else
		printf("L'année %hu n'est pas bissextile !\n", annee);

	return 0;
}