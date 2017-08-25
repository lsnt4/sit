#include "Square.h"

Square::Square(double len)
{
	length = len;
}

double Square::Area()
{
	return (length*length);
}