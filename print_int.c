#include "holberton.h"

/**
 * print_int - function to print integers
 * @args: list printed
 * Return: Return count
 */
int print_int(va_list args)
{
	int i;
	char *str;

	str = convert(va_arg(args, int), 10);

	if (str == NULL)
		str = "NULL";

	i = 0;

	while (str[i] != 0)
		i += _putchar(str[i]);

	return (i);
}

