#include "dessine.h"
#include "graphlib/graphlib.h"

void _line(Vec2 pos1, Vec2 pos2)
{
	line(pos1.x, pos1.y, pos2.x, pos2.y);
}

void dessineCarre(Vec2 pos, unsigned int size)
{
	Vec2 points[4];
	
	points[0] = pos;
	
	points[1].x = pos.x + size / 2;
	points[1].y = pos.y - size / 2;

	points[2].x = pos.x;
	points[2].y = pos.y - size;

	points[3].x = pos.x - size / 2;
	points[3].y = pos.y - size / 2;

	_line(points[0], points[1]);
	_line(points[1], points[2]);
	_line(points[2], points[3]);
	_line(points[3], points[0]);
}

void dessineCarreDiagonale(Vec2 pos, unsigned int size)
{
	Vec2 points[4];
	
	points[0] = pos;
	
	points[1].x = pos.x + size / 2;
	points[1].y = pos.y - size / 2;

	points[2].x = pos.x;
	points[2].y = pos.y - size;

	points[3].x = pos.x - size / 2;
	points[3].y = pos.y - size / 2;

	_line(points[0], points[1]);
	_line(points[1], points[2]);
	_line(points[2], points[3]);
	_line(points[3], points[0]);

	_line(points[0], points[2]);
	_line(points[1], points[3]);
}

void dessineMosaique(unsigned int size, Vec2 pos, unsigned int width, unsigned int height)
{
	for(int i = 0; i < height; i++)
	{
		for(int j = 0; j < width; j++)
		{
			Vec2 squarePos = {pos.x + j * size + size / 2, pos.y - i * size};
			dessineCarre(squarePos, size);
		}
	}
}

void dessineMosaiqueAvecSouris(unsigned int size, unsigned int width, unsigned int height)
{
	Vec2 mousePos;
	cliquer_xy(&(mousePos.x), &(mousePos.y));
	dessineMosaique(size, mousePos, width, height);
}