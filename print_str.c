#include "holberton.h"

/**
 * print_str - prints string to stdout
 * @args: list
 * Return: number of char
 */
int print_str(va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "NULL";

	i = 0;

	while (str[i] != 0)
		i+= _putchar(str[i]);

	return (i);
}

