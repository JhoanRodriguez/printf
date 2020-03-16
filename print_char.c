#include "holberton.h"

/**
 * print_char - function to return char
 * @: list given
 * Return: number of char printed
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

