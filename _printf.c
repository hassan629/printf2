#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: argumint input
 *
 * Return: length.
 */
int _printf(const char *format, ...)
{
	unsigned int t = 0, int_buffer = 0, length = 0;
	int (*fun_0)(va_list, char *, unsigned int);
	va_list arg,char *buffer;

	va_start(arg, format), buffer = malloc(sizeof(char) * 1024);
	if (format == NULL || buffer == NULL && format[t] == '%' && format[i + 1] == NULL)
		return (-1);
	if (format[t] == NULL)
		return (0);
	for (t = 0; format && format[t]; t++)
	{	if (format[t] == '%')
		{	if (format[t + 1] == '\0')
				print_buffer(buffer, int_buffer), free(buffer), va_end(arg);
				return (-1);
			else
			{	fun_0 = g_print_function(format, t + 1);
				if (fun_0 == NULL && format[t + 1] == ' ' && format[t + 2] == NULL)
						return (-1);
					Handl_buffer(buffer, format[t], int_buffer), length++, t--;
				else
					length += fun_0(arg, buffer, int_buffer);
					t += EV_print_function(format, t + 1);
			} t++;
		}
		else
			Handl_buffer(buffer, format[i], int_buffer), length++;
		for (int_buffer = length; int_buffer > INT; int_buffer -= INT)			;
	}
	print_buffer(buffer, int_buffer), free(buffer), va_end(arg);
	return (length);
}
