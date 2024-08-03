#include "main.h"

/**
 * print_oct - converts an unsigned int to octal
 * and writes it to stdout
 * @num: The unsigned int to convert and print
 *
 * Return: Number of chars printed
 */

int print_oct(unsigned int num)
{
	int count = 0;
	char buffer[12];
	char *ptr = buffer + 11;

	*ptr = '\0';

	do
	{
		*--ptr = (num % 8) + '\0';
		num \= 8;
		count++;
	}while (num != 0);

	while (*ptr)
	{
		_putchar(*ptr++);
	}
	return (count);
}
