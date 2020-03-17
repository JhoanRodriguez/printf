#include "holberton.h"
/**
 * _printf - prints output according to format
 * @format: string being passed
 * Return: char to be printed
 */
int (*get_fmt_func(const char s))(va_list)
{
	fmt format[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_per},
		{"d", print_int},
		{"i", print_int}
	};
	int i = 0;

	while (i < 5)
	{
		if (*(format[i].type) == s)
		{
			return (format[i].f);
		}
		i++;
	}
	return (0);
}

int _printf(const char *format, ...)
{
	va_list args;
	int c;
	int i;
	int (*ptr)(va_list);

	c = 0;
	i = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	while (format[i] != 0)
	{
		if (format[i] == '%')
		{
			i++;
			ptr = get_fmt_func(format[i]);
			if (ptr != NULL)
				c+= ptr(args);
			else
				break;
		}
		else
			c+= _putchar(format[i]);

		i++;
	}
	va_end(args);
	return (c);
}

