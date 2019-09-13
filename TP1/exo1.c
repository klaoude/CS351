#include <stdio.h>

void func1(char note)
{
	if(note == 'A')
		puts("Tres bien");
	else if(note == 'B')
		puts("Bien");
	else if(note == 'C')
		puts("Assez bien");
	else if(note == 'D')
		puts("Passable");
	else
		puts("Insuffisant");
}

void func2(char note)
{
	if(note == 'A')
		puts("Tres bien");
	if(note == 'B')
		puts("Bien");
	if(note == 'C')
		puts("Assez bien");
	if(note == 'D')
		puts("Passable");
	if(note == 'E')
		puts("Insuffisant");
}

void func3(char note)
{
	switch(note)
	{
	case 'A':
		puts("Tres bien");
		break;
	case 'B':
		puts("Bien");
		break;
	case 'C':
		puts("Assez bien");
		break;
	case 'D':
		puts("Passable");
		break;
	case 'E':
		puts("Insuffisant");
		break;
	default:
		puts("???");
		break;
	}
}

int main(int argc, char **argv)
{
	char note;
	printf("Quel est votre note ? ");
	note = getchar();
	func1(note);
	return 0;
}