#include "graphlib/graphlib.h"
#include "dessine.h"
#include <stdio.h>

void init(char* title)
{
	gr_inits_w(1920, 1080, title);
	//open_w(&w, 0, 0, 800, 600, title);
}

int main(int argc, char** argv)
{
	init("Mosaique");
	set_blue();

	while(consilent() != 'q')
		dessineMosaiqueAvecSouris(50, 5, 5);

	return 0;
}