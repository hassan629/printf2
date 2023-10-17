#include "main.h"
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);

    int printed_chars = 0;

    while (*format != '\0')
    {
        if (*format == '%')
        {
            format++;  // Move past the '%'

            // Handle the conversion specifier
            switch (*format)
            {
                case 'c':
                {
                    // Print a character
                    int c = va_arg(args, int);
                    _putchar(c);
                    printed_chars++;
                    break;
                }
                case 's':
                {
                    // Print a string
                    char *str = va_arg(args, char *);
                    fputs(str, stdout);
                    printed_chars += strlen(str);
                    break;
                }
                case '%':
                {
                    // Print a percent sign
                    _putchar('%');
                    printed_chars++;
                    break;
                }
                default:
                    // Invalid conversion specifier, ignore and continue
                    break;
            }
        }
        else
        {
            _putchar(*format);
            printed_chars++;
        }

        format++;
    }

    va_end(args);

    return printed_chars;
}
