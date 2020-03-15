#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_char(va_list args);
int print_str(va_list args);
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
