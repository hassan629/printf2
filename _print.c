#include "main.h"
#include <stdarg.h>

int _putchar(char c);
int _puts(const char *str);

int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++; // Move past the '%'

            // Handle the conversion specifier
            switch (*format)
            {
            case 'c':
            {
                // Print a character
                char c = (char)va_arg(args, int);
                printed_chars += _putchar(c);
                break;
            }
            case 's':
            {
                // Print a string
                char *str = va_arg(args, char *);
                printed_chars += _puts(str);
                break;
            }
            case '%':
            {
                // Print a percent sign
                printed_chars += _putchar('%');
                break;
            }
            default:
                // Invalid conversion specifier, ignore and continue
                printed_chars += _putchar('%');
                printed_chars += _putchar(*format);
                break;
            }
        }
        else
        {
            // Regular character, print as-is
            printed_chars += _putchar(*format);
        }

        format++;
    }

    va_end(args);

    return printed_chars;
}

int _putchar(char c)
{
	write(1, &c, 1); /**Write the character to the standard output (file descriptor 1)**/
	return 1;
}

int _puts(const char *str)
{
	int printed_chars = 0;

    while (*str != '\0')
    {
        _putchar(*str);
        printed_chars++;
        str++;
    }

    return printed_chars;
}
