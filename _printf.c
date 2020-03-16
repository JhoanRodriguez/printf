#include "holberton.h"
/**
 * _printf - prints output according to format
 * @format: string being passed
 * Return: char to be printed
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i;
	int j;

	i = 0;
	j = 0;

	fmt form[] ={
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_int}
	};
	if (format == NULL)
		return (-1);

	va_start(list, format);
	return (0);
}

