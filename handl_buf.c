#include "main.h"
#define INT 1024
/**
 * Handl_buffer - print buffer characters.
 * @buffer: pointer
 * @C: arg charcter
 * @int_buffer: buffer pointer index.
 *
 * Return: buffer pointer index.
 */
unsigned int Handl_buffer(char *buffer, char C, unsigned int int_buffer)
{
	if (int_buffer == INT)
	{
		print_buffer(buffer, int_buffer);
		int_buffer = NULL;
	}
	buffer[int_buffer] = C;
	int_buffer++;
	return (int_buffer);
}
