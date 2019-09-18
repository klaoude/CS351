#include <stdio.h>

int pgcd(int a, int b)
{
	if(b == 0)
		return a;
	
	int r = 0;
	while(r = a % b)
	{
		a = b;
		b = r;
		#ifdef MISEAUPOINT
		printf("valeur courante de b = %d\n", b);
		#endif
	}
	return b;
}

int main(int argc, char** argv)
{
	printf("A ? ");
	int a, b;
	scanf("%d", &a);
	printf("B ? ");
	scanf("%d", &b);
	printf("Le pgcd de %d et %d est %d\n", a, b, pgcd(a, b));
	return 0;
}