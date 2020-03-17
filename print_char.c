#include "holberton.h"

/**
 * print_char - function to return char
 * @args: list * Return: number of char printed
 * Return: Return char
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

