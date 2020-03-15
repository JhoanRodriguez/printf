#include "holberton.h"

/**
 * str - prints string to stdout
 * @string: list
 * Return: number of char
 */
int print_str(va_list string)
{
	int i;
	char *str;

	str = va_arg(string, char *);

	if (str == NULL)
		str = "NULL";

	i = 0;

	while (str[i] != '\0')
		i+= _putchar(str[i]);
	return (i);
}

