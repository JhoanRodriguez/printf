#include "holberton.h"

/**
 * _int - function to print integers
 * @integ: list printed
 * Return: Return count
 */
int _int(va_list list)
{
	int *ptr;

	int x = va_arg(list, int), y;

	y = counter(x);
	ptr = malloc(y);

	for (; y > 0; y--)
	{
		ptr[y - 1] = x / 10;
		x = x / 10;
	}
	y = counter(x);
	for (i = 0; i < y; i++)
	{
		_putchar (ptr[i] + 48);
	}
	return (0);

}