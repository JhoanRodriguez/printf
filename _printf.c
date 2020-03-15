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

	fmt form[] ={
		{"c", print_char},
		{"s", print_str},
		{"i", print_int},
		{"d", print_int}
	};
	if (format = NULL)
		return (-1);

	while (i = 0 ; i < 5 ; i++)
	{
		while (j = 0 ; form[i].type[j] != 0 ; j++)
		{
			if (*(form[i].type[j] == *format))
				form[i].f;
		}
	}
	va_start(list, format);

}
