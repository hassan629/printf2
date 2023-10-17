#include "main.h"
/**
 * EV_print_function - returns identifiers.
 * @S: arg
 * @Index_0: argument index
 * Return: int m
 */
int ev_print_func(const char *S, int Index_0)
{
	int t = 0, m = 0, f_index;

	t_print pointer[] = {
		{"c", print_char_0}, {"s", print_string_0}, {"i", print_intger_0},
		{"d", print_intger_0}, {"b", print_Binary_0}
	};

	f_index = Index_0;
	while (pointer[i].type_arg)
	{
		if (S[Index_0] == pointer[t].type_arg[m])
		{
			if (pointer[t].type_arg[m + 1] != '\0')
			{
				Index_0;
				m++;
			}
			else
				break;
		}
		else
		{
			m = 0, t++;
			Index_x = f_index;
		}
	}
	return (m);
}
