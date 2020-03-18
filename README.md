Date 17/3/2020

_printf(3) 

NAME _printf - custom function that format and print data as "printf" SYNOPSIS Format arg0, arg1 ... 

DESCRIPTION 

print arguments under the format (char, string, integer, decimal ,binary , Hex , hex , octal)
according to the next options:

%c to print chars
%s to print strings
%i to print Integers 
%d to print Decimals 
%b to print Binary base 
%x to print Hexadecimal base in lowercase 
%X to print Hexadecimal base in Uppercase 
%o to print Octal base 

EXAMPLE Printing a char using _printf function:

_printf("Character: %c ", 'H');
Output - Character: H

Printing a string using _printf function:
_printf("String: %s ", "I am a string !");
Output - String: I am a string !

Printing a Binary using _printf function:
_printf("Binary number : %c ", 10);
Output - Binary Number : 1010 

FILES
_printf.c File that contains the main function. 
holberton.h File that contains all the libraries and prototypes

NOTES
Currently, the program doesn't account for flags, fields, precision, or length modifiers.
SEE ALSO

printf(3)
AUTHOR

Jhoan Rodríguez, Samuel Gómez
