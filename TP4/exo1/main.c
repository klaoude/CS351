#include <stdio.h>
#include <stdlib.h>

int lireDonnees(const char* fileName, int** t)
{
	FILE* f = fopen(fileName, "r");
	if(f == NULL)
	{
		printf("[-] File %s not found !\n", fileName);
		return 0;
	}
	
	unsigned int lineCount = 1;
	for (char c = getc(f); c != EOF; c = getc(f)) 
        if (c == '\n')
            lineCount++;

    *t = malloc(lineCount * sizeof(int));

    fseek(f, SEEK_SET, 0);

    for(int i = 0; i < lineCount; i++)
    	fscanf(f, "%d", *t + i);

    fclose(f);

    return lineCount;
}

void showTab(int* tab, size_t size)
{
	printf("[+] Show tab %p\n", tab);
	for(int i = 0; i < size; i++)
		printf("%d ", tab[i]);
	puts("");
}

void triabulle(int* t, size_t n)
{
	char continu = 1;
	for(int i = 0; i < n && continu; i++)
	{
		continu = 0;
		for(int j = 1; j < n; j++)
		{
			if(t[j-1] > t[j])
			{
				int tmp = t[j-1];
				t[j-1] = t[j];
				t[j] = tmp;
				continu = 1;
			}
		}
	}
}

void enregistrerDonnees(const char* fileName, int* t, size_t n)
{
	FILE* f = fopen(fileName, "w");

	for(int i = 0; i < n; i++)
		fprintf(f, "%d\n", t[i]);

	fclose(f);
}

int main(int argc, char const *argv[])
{
	if(argc != 3)
	{
		printf("Usage : %s [input] [output]\n", argv[0]);
		return -1;
	}

	int* tab1;
	int size = lireDonnees(argv[1], &tab1);
	showTab(tab1, size);
	triabulle(tab1, size);
	showTab(tab1, size);
	enregistrerDonnees(argv[2], tab1, size);

	return 0;
}