#include <stdio.h>

int main(int argc, char** argv)
{
	printf("n ? ");
	unsigned int n;
	scanf("%u", &n);
	unsigned int sum = 0;
	for(unsigned int i = 0; i < n; i++)
	    sum += i;
	printf("La somme des %u premier entier est %u\n", n, sum);

	return 0;
}