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
		{"i", print_int},
		{"b", print_bin},
		{"u", print_unsigned}
	};
	int i = 0;

	while (i < 7)
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
			if (format[i] == '\0')
				return (-1);
			if (ptr != NULL)
				c+= ptr(args);

			else
			{
				i--;
				_putchar(format[i]);
			}
		}
		else
			c+= _putchar(format[i]);

		i++;
	}
	va_end(args);
	return (c);
}
