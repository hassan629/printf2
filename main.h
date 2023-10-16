#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_
#define INT 1024
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct Print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} t_print;

int _printf(const char *format, ...);
int print_char_0(va_list arg, char *buffer, unsigned int int_buffer);
int print_string_0(va_list arg, char *buffer, unsigned int int_buffer);
int print_intger_0(va_list arg, char *buffer, unsigned int int_buffer);
int print_Binary_0(va_list arg, char *buffer, unsigned int int_buffer);
int (*g_print_function(const char *S, int Index_0))(va_list, char *, unsigned int);
int EV_print_function(const char *S, int Index_0);
unsigned int Handl_buffer(char *buffer, char C, unsigned int int_buffer);
int print_buffer(char *buffer, unsigned int num_buffer);
char *fill_Bin_arr(char *Bin, long int intger_in, int t_sneg, int limit);

#endif
