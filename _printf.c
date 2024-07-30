#include "main.h"

int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars;
	const char *ptr;
	const char *str;
	char c;

	va_start(args, format);
	printed_chars = 0;

	for (ptr = format; *ptr != '\0'; ++ptr)
	{
		if (*ptr == '%')
		{
			++ptr;
			if (*ptr == 'c')
			{
				c = (char) va_arg(args, int);
				printed_chars += print_char(c);
			}
			else if (*ptr == 's')
			{
				str = va_arg(args, const char *);
				printed_chars += print_string(str);
			}
			else if (*ptr == '%')
			{
				printed_chars += write(1, "%", 1);
			}
		}
		else
		{
			printed_chars += write(1, ptr, 1);
		}
	}
	va_end(args);
	return (printed_chars);
}
