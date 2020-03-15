#include "holberton.h"
int counter ( int y)
{
	int c = 0;

	while (y > 0)
	{
		y = y / 10;
		c++;
	}
	return (c);
}
