#include <stdio.h>
#include <stdlib.h>

size_t myStrlen(const char* s)
{
	size_t ret = 0;
	while(*s != 0x0)
	{
		ret++;
		s++;
	}
	return ret;
}

char* myStrcpy(char* dest, const char* src)
{
	int i;
	for (i = 0; src[i] != '\0'; i++)
    	dest[i] = src[i];
    dest[i] = '\0';

    return dest;
}

void showHex(const char* str)
{
	size_t strSize = myStrlen(str);
	for(int i = 0; i < strSize; i++)
		printf("0x%x ", str[i]);
	puts("");
}

void showDec(const char* str)
{
	size_t strSize = myStrlen(str);
	for(int i = 0; i < strSize; i++)
		printf("%d ", str[i]);
	puts("");
}

char* toUpper(const char* str)
{
	char* ret = malloc(myStrlen(str) + 1);

	for(int i = 0; str[i] != 0; i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			ret[i] = str[i] - 32;
		else
			ret[i] = str[i];
	}

	return ret;
}

char* toLower(const char* str)
{
	char* ret = malloc(myStrlen(str) + 1);

	for(int i = 0; str[i] != 0; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			ret[i] = str[i] + 32;
		else
			ret[i] = str[i];
	}

	return ret;
}

char* upToLow(const char* str)
{
	char* ret = malloc(myStrlen(str) + 1);

	for(int i = 0; str[i] != 0; i++)
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			ret[i] = str[i] + 32;
		else if(str[i] >= 'a' && str[i] <= 'z')
			ret[i] = str[i] - 32;
		else
			ret[i] = str[i];
	}

	return ret;
}

char* retournerMot(const char* mot)
{
	size_t len = myStrlen(mot);
	char* ret = malloc(len + 1);

	int i;
	for(i = 0; i < len; i++)
		ret[i] = mot[len - i - 1];
	ret[i] = 0;

	return ret;
}

int rechercherCaractereG(const char* str, char chr)
{

	for(int i = 0; str[i] != 0; i++)
		if(str[i] == chr)
			return i+1;
	return -1;
}

int rechercherCaractereD(const char* str, char chr)
{
	size_t len = myStrlen(str);
	for(int i = 0; i < len; i++)
		if(str[len - i - 1] == chr)
			return i+1;
	return -1;
}

int estPalindrome(const char* str)
{
	size_t len = myStrlen(str);
	for(int i = 0; i < len/2; i++)
	{
		if(str[i] != str[len - i - 1])
			return -1;
	}
	return 0;
}

int myStrcmp(const char* str1, const char* str2)
{
	size_t len = myStrlen(str1);
	for(int i = 0; i < len; i++)
	{
		if(str1[i] != str2[i])
		{
			if(str1[i] > str2[i])
				return 1;
			return -1;
		}
	}
	return 0;
}

int main(int argc, char const *argv[])
{
	printf("%d\n", myStrlen("cazouyano"));
	char* cazou = malloc(6);
	myStrcpy(cazou, "cazou");
	printf("%s\n", cazou);

	showHex(cazou);
	showDec(cazou);

	printf("%s %s %s\n", toUpper("CaZoUYaNo"), toLower("CaZoUYaNo"), upToLow("CaZoUYaNo"));
	printf("%s\n", retournerMot("cazouyano"));
	printf("%d %d\n", rechercherCaractereG("cazouyano", 'y'), rechercherCaractereD("cazouyano", 'y'));

	printf("%d %d\n", estPalindrome("cazouuozac"), estPalindrome("cazou"));

	return 0;
}