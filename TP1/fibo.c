#include <stdio.h>

unsigned int fibo(unsigned int n)
{
	unsigned int one = 0, two = 1, tmp;
	while(n--)
	{
		tmp = one + two;
		one = two;
		two = tmp;
	}
	return one;
}

int main(int argc, char** argv)
{
	printf("n ? ");
	unsigned int n;
	scanf("%u", &n);
	printf("Le %u éme terme de la suite de fibonnacci est %u\n", n, fibo(n));
}