#ifndef DESSINE_H
#define DESSINE_H

typedef struct Vec2
{
	int x, y;
} Vec2;

void dessineCarre(Vec2 pos, unsigned int size);
void dessineCarreDiagonale(Vec2 pos, unsigned int size);
void dessineMosaique(unsigned int size, Vec2 pos, unsigned int width, unsigned int height);
void dessineMosaiqueAvecSouris(unsigned int size, unsigned int width, unsigned int height);

#endif