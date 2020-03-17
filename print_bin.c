#include "holberton.h"

/**
 * print_bin - function to print binary
 * @args: number to be converter into binary
 * Return: Return count
 */
int print_bin(va_list args)
{
	int numb, x, y = 0;

	numb = va_arg(args, int);

	if (numb == 0)
		return (0);

	x = _sqrt(numb);

	while (_pow(2,x) > numb)
	{
		x--;
	}

	for (; x >= 0; x--)
	{
		y = _pow(2, x);

		if ((numb - y) >= 0)
		{
			_putchar(49);
			numb = numb - y;
		}
		else
			_putchar(48);
	}
	return (0);
}
