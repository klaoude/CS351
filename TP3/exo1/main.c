#include <stdio.h>
#include <math.h>

void afficherNotes(float tab[], unsigned int n)
{
	for(unsigned int i = 0; i < n; i++)
		printf("%f ", tab[i]);
	puts("");
}

float minimumNote(float tab[], unsigned int n)
{
	float min = 999;
	for(unsigned int i = 0; i < n; i++)
		if(tab[i] < min)
			min = tab[i];
	return min;
}

float maximumNote(float tab[], unsigned int n)
{
	float max = 0;
	for(unsigned int i = 0; i < n; i++)
		if(tab[i] > max)
			max = tab[i];
	return max;
}

float calculeMoyenne(float tab[], unsigned int n)
{
	float sum = 0;
	for(unsigned int i = 0; i < n; i++)
		sum += tab[i];
	return sum / n;
}

float calculeVariance(float tab[], unsigned int n)
{
	float sum = 0;
	float moy = calculeMoyenne(tab, n);
	for(unsigned int i = 0; i < n; i++)
		sum += (tab[i] - moy) * (tab[i] - moy);
	return sum / n;
}

float calculeEcartType(float tab[], unsigned int n)
{
	return sqrt(calculeVariance(tab, n));
}

int rechercherValeur(float tab[], unsigned int n, float val)
{
	for(unsigned int i = 0; i < n; i++)
		if(tab[i] == val)
			return i;
	return -1;
}

void hgraph(float tab[], unsigned int n)
{
	unsigned int array[10] = {0};
	for(unsigned int i = 0; i < n; i++)
		array[(int)(tab[i] / 2)]++;
	for(unsigned char i = 0; i < 10; i++)
	{
		printf("[ %d ; %d [ : ", i * 2, (i + 1) * 2);
		for(unsigned int j = 0; j < array[i]; j++)
			printf("* ");
		puts("");
	}
}

void vgraph(float tab[], unsigned int n)
{
	unsigned int array[10];
	for(unsigned int i = 0; i < n; i++)
		array[(int)(tab[i] / 2)]++;
}

int main(int argc, char** argv)
{
	float test1[] = {0, 13.5, 8.5, 13.7, 20, 12, 8.5, 17, 11, 10, 9.5, 4, 14, 13.5, 12, 1, 15, 10.5, 7.5, 9.5};
	float test2[] = {12, 13.5, 8.5, 14.7, 6};

	printf("Notes : ");
	afficherNotes(test2, 5);
	printf("Note la plus basse : %f\n", minimumNote(test2, 5));
	printf("Note la plus élevée : %f\n", maximumNote(test2, 5));
	printf("Moyenne : %f\n", calculeMoyenne(test2, 5));
	printf("Variance : %f\n", calculeVariance(test2, 5));
	printf("Ecart-Type : %f\n", calculeEcartType(test2, 5));
	printf("Rang de la valeur 13,5 : %d\n", rechercherValeur(test2, 5, 13.5));
	printf("Rang de la valeur 10,5 : %d\n", rechercherValeur(test2, 5, 10.5));
	puts("");
	printf("Notes : ");
	afficherNotes(test1, 20);
	hgraph(test1, 20);

	return 0;
}