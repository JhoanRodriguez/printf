#include "holberton.h"
/**
 * _sqrt - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt(int n)
{
	int x;

	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);

	for (x = 2; (x * x) < n; x++)
	{
		continue;
	}
	return (x - 1);
}
