#include "holberton.h"

/**
 * print_oct - function to print octal
 * @args: list being passed
 * Return: updated count
 */
int print_oct(va_list args)
{
	int i;
	char *str;

	str = convert(va_arg(args, int), 8);

	if (str == NULL)
		str = "NULL";

	i = 0;

	while (str[i] != 0)
		i += _putchar(str[i]);

	return (i);


}
