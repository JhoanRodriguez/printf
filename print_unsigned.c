#include "holberton.h"

/**
 * print_unsigned - function to print integers
 * @args: list printed
 * Return: Return count
 */
int print_unsigned (va_list args)
{
	int i;
	char *str;

	str = convert(va_arg(args, unsigned int), 10);

	if (str == NULL)
	{
		str = "NULL";
	}

	i = 0;

	if (str[i] == 45)
	{
		return (0);
	}

	while (str[i] != '\0')
		i += _putchar(str[i]);

	return (i);
}
