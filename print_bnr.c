#include "main.h"

/**
 * print_Binary_0 - prints decimal in binary
 * @arguments: input string
 * @buffer: pointer
 * @int_buffer: buffer pointer index
 *
 * Return: num of chars 
 */
int print_Binary_0(va_list arguments, char *buf, unsigned int ibuf)
{
	int intger_input, cou_nt,f_one, t,  ive;
	char *Bin;

	intger_input = va_arg(arguments, int);
	ive = 0;
	if (intger_input == 0)
	{
		int_buffer = Handl_buffer(buffer, '0', int_buffer);
		return (1);
	}
	if (intger_input < 0)
	{
		intger_input = (intger_input * -1) - 1;
		ive = 1;
	}
	Bin = malloc(sizeof(char) * (32 + 1));
	Bin = fill_Bin_arr(Bin, intger_input, ive, 32);
	f_one = 0;
	for (cou_nt = t = 0; Bin[t]; t++)
	{
		if (f_one == 0 && Bin[t] == '1')
			f_one = 1;
		if (f_one == 1)
		{
			int_buffer = Handl_buffer(buffer, Bin[t], int_buffer);
			cou_nt++;
		}
	}
	free(Bin);
	return (cou_nt);
}
