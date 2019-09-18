#include "math.h"

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
	}
	return b;
}

unsigned int quotient(unsigned int a, unsigned int b)
{
	if(b == 0)
		return 0;

	unsigned int ret = 1, res = a;
	while(res > b)
	{
		res = res - b;
		ret++;
	}
	return ret;
}

unsigned int reste(unsigned int a, unsigned int b)
{
	return b != 0 ? a - quotient(a, b) * b : 0;
}

unsigned int valeurAbsolue(int a)
{
	return a > 0 ? a : -a;
}

unsigned int ppcm(unsigned int a, unsigned int b)
{
	return valeurAbsolue(a*b) / pgcd(a, b);
}

void testBibliotheque()
{	
	printf("quotient(25, 5) = %d\n", quotient(25, 5)); //test quotient entier	
	printf("quotient(25, 6) = %d\n", quotient(25, 6)); //test quotient avec reste
	printf("quotient(1337, 0) = %d\n", quotient(1337, 0)); // test quotient avec b = 0

	printf("reste(25, 5) = %d\n", reste(25, 5)); //test reste sans reste	
	printf("reste(25, 6) = %d\n", reste(25, 6)); //test reste avec reste
	printf("reste(1337, 0) = %d\n", reste(1337, 0)); // test reste avec b = 0

	printf("valeurAbsolue(420) = %d\n", valeurAbsolue(420)); //test valeurAbsolue positive
	printf("valeurAbsolue(-420) = %d\n", valeurAbsolue(-420)); // test valeurAbsolue negative
	printf("valeurAbsolue(0) = %d\n", valeurAbsolue(0)); // test valeurAbsolue avec 0

	printf("ppcm(10, 54) = %d\n", ppcm(10, 54)); //test ppcm a < b
	printf("ppcm(54, 10) = %d\n", ppcm(54, 10)); // test ppcm a > b
	printf("ppcm(0, 24) = %d\n", ppcm(0, 24)); // test ppcm avec a = 0
	printf("ppcm(24, 0) = %d\n", ppcm(24, 0)); // test ppcm avec b = 0
}