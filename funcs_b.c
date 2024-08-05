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
		*--ptr = (num % 8) + '0';
		num /= 8;
		count++;
	}while (num != 0);

	while (*ptr)
	{
		_putchar(*ptr++);
	}
	return (count);
}

/**
 * print_caphex - converts an unsigned int to upper case
 * and writes it to stdout
 * @num: The unsigned it to convert and print
 *
 * Return: Number of chars to be printed
 */

int print_caphex(unsigned int num)
{
	int count = 0;
	char buffer[9];
	char *ptr = buffer + 8;
	char hex_dig[] = "0123456789ABCDEF";
	
	*ptr = '\0';

	do
	{
		*--ptr = hex_dig[num % 16];
		num /= 16;
		count++;
	}while(num != 0);

	while (*ptr)
	{
		_putchar(*ptr++);
	}
	return (count);
}

/**
 * print_lowhex - converts an unsigned int to hex
 * and writes it to stdout
 * @num: The unsiged int to convert and write
 *
 * Return: The number of chars printed
 */

int print_lowhex(unsigned int num)
{
	int count = 0;
	char buffer[9];
	char *ptr = buffer + 8;
	char hex_dig[] "0123456789abcdef";

	*ptr = '\0';

	do
	{
		*--ptr = hex_dig[num % 16];
		num /= 16;
		count++;
	}while (num != 0);

	while (*ptr)
	{
		_putchar(*ptr++);
	}
	return (count);
}
