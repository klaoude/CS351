#include <stdio.h>

unsigned long factorielle(unsigned long n)
{
	unsigned long ret = 1;
	for(unsigned long i = 1; i < n + 1; i++)
		ret *= i;
	return ret;
}

unsigned long factorielleBis(unsigned long m)
{
	unsigned long fact = 1;
	for(unsigned long n = 1; n < 99999999; n++)
	{
		fact *= n;
		if(fact > m)
			return n;
	}
}

int main(int argc, char** argv)
{
	unsigned long n, m;
	printf("Entrez n pour calculer n! ");
	scanf("%lu", &n);
	printf("Entrez m pour factorielleBis ");
	scanf("%lu", &m);
	printf("%lu! = %lu, factorielleBis(%lu) = %lu\n", n, factorielle(n), m, factorielleBis(m));
	return 0;
}