#include "main.h"
#include <stdio.h>
/**
 * print_char_0 - print char
 * @arguments: arguments 
 * @buffer: pointer
 * @int_buffer: buffer pointer index
 *
 * Return: 1.
 */
int print_char_0(va_list arguments, char *buffer, unsigned int int_buffre)
{
	char C;

	C = va_arg(arguments, int);
	Handl_buffer(buffer, C, int_buffer);
	return (1);
}
