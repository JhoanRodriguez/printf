#include "holberton.h"
/**
 * _pow - return the value of `x` raised to power of `y`
 * @x: number value
 * @y: number power
 * Return: x to power of y
 */

int _pow(int x, int y)
{
	int pow = 1;

	for (; y > 0; y--)
	{
		pow = x * pow;
	}

	return (pow);
}
