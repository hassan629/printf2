#include "main.h"
/**
*G_print_func - correct function
*@S: arg indentifier.
*@Index_0: argument indentifier index.
*
*Return: pointer.
*/
int (*G_print_func(const char *S, int Index_0))(va_list, char *, unsigned int)
{
	int t = 0, m = 0, f_index;

	f_index = Index_0;
	t_print pointer[] = {
		{"c", print_char_0}, {"s", print_string_0},
		{"i", print_intger_0}, {"b", print_Binary_0}
	};

	while (pointer[t].type_arg)
	{
		if (S[Index_0] == pointer[t].type_arg[m])
		{
			if (pointer[t].type_arg[m + 1] != '\0')
			{
				Index_0++, m++;
			}
			else
				break;
		}
		else
		{
			m = 0;
			t++;
			Index_0 = f_index;
		}
	}
	return (pointer[t].f);
}
