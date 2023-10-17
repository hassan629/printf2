#include "main.h"

/**
 * print_string_0 - function print string.
 * @arguments: input string
 * @buffer: pointer
 * @int_buffer: buffer pointer index
 *
 * Return: t.
 */
int print_string_0(va_list arguments, char *buffer, unsigned int int_buffer)
{
	char *string;
	char NILL[] = "(NULL)";
	unsigned int t;

	string = va_arg(arguments, char *);
	if (string == NULL)
	{
		for (t = 0; NILL[t]; t++)
		{
			int_buffer = Handl_buffer(buffer, NILL[t], int_buffer);
		return (6);
		}
	}
	t = 0;

	while (string[t])
	{
		int_buffer = Handl_buffer(buffer, string[i], int_buffer);
		t++;
	return (t);
	}
}
