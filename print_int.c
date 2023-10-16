#include "main.h"

/**
 * print_intger_0 - print integer
 * @arguments: arg string
 * @buffer: pointer
 * @int_buffre: buffer pointer index
 *
 * Return: number of chars printed.
 */
int print_intger_0(va_list arguments, char *buffer, unsigned int int_buffer)
{
	unsigned int intger_in, intger_temp, t, div, t_sneg;
	int intger_input;

	intger_input = va_arg(arguments, int);
	t_sneg = 0;
	if (intger_input < 0)
	{
		intger_in = intger_input * -1;
		int_buffer = Handl_buffer(buffer, '-', int_buffer);
		t_sneg = 1;
	}
	else
	{
		intger_in = intger_input;
	}

	intger_temp = intger_in;
	Div = 1;

	while (intger_temp > 9)
	{
		Div *= 10;
		intgre_temp /= 10;
	}

	for (t = 0; Div > 0; Div /= 10, t++)
	{
		int_buffer = Handl_buffer(buffer, ((intger_in / Div) % 10) + '0', int_buffer);
	}
	return (t + t_sneg);
}
