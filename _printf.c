#include "main.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

/**
 * print_char - Prints a character
 * @c: The character to print
 *
 * Return: The number of characters printed
 */
static int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_string - Prints a string
 * @str: The string to print
 *
 * Return: The number of characters printed
 */
static int print_string(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (write(1, str, len));
}

/**
 * _printf - Custom printf function that supports %c, %s, and %%
 * @format: The format string
 * @...: The values to format
 *
 * Return: The number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int total = 0;
	const char *p;

	va_start(args, format);

	for (p = format; *p != '\0'; p++)
	{
		if (*p == '%' && (*(p + 1) != '\0'))
		{
			p++;
			switch (*p)
			{
				case 'c':
					total += print_char(va_arg(args, int));
					break;
				case 's':
					total += print_string(va_arg(args, char *));
					break;
				case '%':
					total += print_char('%');
					break;
				default:
					total += print_char('%');
					total += print_char(*p);
					break;
			}
		}
		else
		{
			total += print_char(*p);
		}
	}

	va_end(args);

	return (total);
}
