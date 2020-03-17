#include "holberton.h"
/**
 * get_fmt_func - database of the funcions
 * @s: string being passed
 * Return: char to be printed
 */
int (*get_fmt_func(const char s))(va_list)
{
	int i = 0;

	fmt format[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_per},
		{"d", print_int},
		{"i", print_int},
		{"b", print_bin},
		{"u", print_unsigned},
		{"o", print_oct},
		{NULL, NULL},
	};

	while (i < 8)
	{
		if (*(format[i].type) == s)
		{
			return (format[i].f);
		}
		i++;
	}
	return (0);
}
/**
 * _printf - prints output according to format
 * @format: string being passed
 * Return: char to be printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int c;
	int i;
	int (*ptr)(va_list);

	c = 0;
	i = 0;

	if (!format)
		return (-1);

	va_start(args, format);
	while (format)
	{				if (format[i] == 0)
		return (-1);


		if (format[i] == 37)
		{
			i++;
			ptr = get_fmt_func(format[i]);
			if (!ptr)
			{
				if (format[i] == 0)
					return (-1);

				c += _putchar(format[i - 1]);
				c += _putchar(format[i]);

			}
			else
				c += ptr(args);

		}
		else
			c += _putchar(format[i]);

		i++;
	}
	va_end(args);
	return (c);
}
