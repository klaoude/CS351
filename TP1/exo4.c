#include <stdio.h>
int main() 
{
	int i, j, k, l;
	i = j = k = l = 0;
	while(i < 9) 
	{
		//i++ post increment i
		//++j pre increment j
		//k-- post decrement k
		//--l pre decrement l
		printf("i++ = %d, ++j = %d, k-- = %d, --l = %d\n",i++, ++j, k--, --l);
	}
	printf ("i = %d, j = %d, k = %d, l = %d\n", i, j, k, l);
	return (0);
}
