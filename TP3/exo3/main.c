#include <stdio.h>
#include <stdlib.h>

int** initMatrice(unsigned int m, unsigned int n)
{
	int** ret = malloc(m * sizeof(int*));
	for(int i = 0; i < m; i++)
	{
		ret[i] = malloc(n * sizeof(int));
		for(int j = 0; j < n; j++)
			ret[i][j] = 0;
	}
	return ret;
}

void afficheMatrice(int mat[][3], unsigned int m, unsigned int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			printf("%d ", mat[i][j]);
		puts("");
	}
}

void afficheMatricePointer(int** mat, unsigned int m, unsigned int n)
{
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
			printf("%d ", mat[i][j]);
		puts("");
	}
}

int** additionnerMatrices(int mat1[][3], int mat2[][3], unsigned int m, unsigned int n)
{
	int** ret = initMatrice(m, n);

	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			ret[i][j] = mat1[i][j] + mat2[i][j];

	return ret;
}

int** transposee(int mat[][3], unsigned int m, unsigned int n)
{
	int** ret = initMatrice(n, m);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			ret[i][j] = mat[j][i];
	return ret;
}

int** produitMatriciel(int mat1[2][3], int mat2[3][2])
{
	int** ret = initMatrice(2, 2);
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 2; j++)
			for(int k = 0; k < 3; k++)
				ret[i][j] += (mat1[i][k] * mat2[k][j]);
	return ret;
}

int main(int argc, char** argv)
{
	int matrice1[2][3] = {{1, 0, 4}, {-1, 2, -5}};
	int matrice2[2][3] = {{2, -3, 1}, {5, 8, 2}};
	int matrice4[3][2] = {{0, 1}, {2, -1}, {3, 4}};

	afficheMatrice(matrice1, 2, 3);
	puts(" + ");
	afficheMatrice(matrice2, 2, 3);
	puts(" = ");
	int** matrice3 = additionnerMatrices(matrice1, matrice2, 2, 3);
	afficheMatricePointer(matrice3, 2, 3);
	puts("");
	puts("Transposée de : ");
	afficheMatrice(matrice1, 2, 3);
	puts(" = ");
	afficheMatricePointer(transposee(matrice1, 2, 3), 3, 2);
	puts("\nProduit : ");
	int** matrice5 = produitMatriciel(matrice1, matrice4);
	afficheMatricePointer(matrice5, 2, 2);

	return 0;
}