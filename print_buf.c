#include "main.h"

/**
 * print_buffer- print buffir
 * @buffer: pointer
 * @num_buffer: number to print
 *
 * Return: num of bytes
 */
int print_buffer(char *buffer, unsigned int num_buffer)
{
	return (write(1, buffer, num_buffer));
}
