#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int _strlen(char *s);
nt counter (int y);
int _printf(const char *format, ...);
int _putchar(char c);
int print_char(va_list character);
int print_str();
/**
 * struct fmt - function to check for formats
 * @type: The format to print
 * @f: The print function to use
 */
typedef struct Format
{
	char *type;
	void (*f)();
} fmt;
#endif
