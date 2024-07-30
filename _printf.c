#include "main.h"

/**
 * _printf - Custom implementation of printf
 * @format: Format string containing the text and format specifiers
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
	va_list args;
	const char *ptr;
	int printed_chars;

	va_start(args, format);
	printed_chars = 0;

	for (ptr = format; *ptr != '\0'; ++ptr)
	{
		if (*ptr == '%')
		{
			++ptr;
			if (*ptr == 'c')
				printed_chars += print_char((char)va_arg(args, int));
			else if (*ptr == 's')
				printed_chars += print_string(va_arg(args, const char *));
			else if (*ptr == '%')
				printed_chars += write(1, "%", 1);
			else
			{
				printed_chars += write(1, "%", 1);
				printed_chars += write(1, ptr, 1);
			}
		}
		else
			printed_chars += write(1, ptr, 1);
	}

	va_end(args);
	return (printed_chars);
}
