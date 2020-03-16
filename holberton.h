#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int _putchar(char c);
int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
int _int(va_list args);
int print_char(va_list args);
int print_str(va_list args);
int print_per(va_list args);
int print_int(va_list args);
int counter (int i);
/**
 * struct fmt - function to check for formats
 * @type: The format to print
 * @f: The print function to use
 */
typedef struct Format
{
	char *type;
	int (*f)(va_list);
} fmt;
#endif
